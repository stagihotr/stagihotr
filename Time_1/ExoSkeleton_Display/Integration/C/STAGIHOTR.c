#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <strings.h>
#include <time.h>
#include <pthread.h>
#include <errno.h>
#include <fcntl.h>

#include <sys/time.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>

#include "CommunicationInterfaces.h"
#include "OperatorInformation.h"

#ifndef TRUE
#define TRUE kcg_true
#define FALSE kcg_false
#endif

operator_input_type ua_inputs;
operator_output_type ua_outputs;

char *DF_output_ip = "127.0.0.1";
int DF_output_port = 9999;
int DF_output_socket;

void receiveMessage(FRAMEWORK_MESSAGE message) {
    /*TEAM1_INPUT_INTERFACE input;
    char str[12];

    if (message.to == TEAM1) {
        input = message.input_interface.team1_input_interface;
        switch (message.from) {
        case TEAM2:
            printf("Received: Message from TEAM2 to TEAM1 \n");
            ua_inputs.SignalFromTeam2 = input.SignalFromTeam2;
            sprintf(str, "%d", ua_outputs.SignalToLED);
            createFile(str);
            break;
        }
    }*/
}

void buildMessage(FRAMEWORK_MESSAGE *message) {
    /*message->from = TEAM1;
    switch (message->to) {
    case TEAM2:
        printf("Sent: Message from TEAM1 to TEAM2 \n");
        TEAM2_INPUT_INTERFACE *output = &(message->input_interface.team2_input_interface);
        output->SignalFromTeam1 = ua_outputs.SignalToTeam2;
    }*/
}

void executeOperator() {
   Main(&ua_inputs, &ua_outputs);
}

void clear_ua_inputs() {
    ua_receive_clear(&ua_inputs, NULL);
}

void clear_ua_outputs() {
    Main_reset(&ua_outputs);
}

void initializeCustomLogic() {
    /* Insert your additional logic */
    /* For instance, you can initialize your RaspberryPi controller here */
    struct hostent *outputHost = NULL;
    struct sockaddr_in address;

    DF_output_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (DF_output_socket < 0) {
        printf("ERROR: cannot open a socket !\n");
        exit(1);
    }

    outputHost = gethostbyname(DF_output_ip);
    if (outputHost == NULL) {
        printf("ERROR: cannot resolve hostname (%s) !\n", DF_output_ip);
        exit(1);
    }

    memset(&address, 0, sizeof(address));
    memcpy(&address.sin_addr.s_addr, outputHost->h_addr_list[0], outputHost->h_length);

    address.sin_family = AF_INET;
    address.sin_port = htons(DF_output_port);

    if (connect(DF_output_socket, (const struct sockaddr *) &address, sizeof(address)) < 0) {
        printf("ERROR: cannot connect with host (%s/%d) !\n", DF_output_ip, DF_output_port);
        exit(1);
    }

    printf("Connected to Output Socket (%s/%d) .\n", DF_output_ip, DF_output_port);
}

void executeCustomLogic() {
    /* Insert your additional logic */
    /* For instance, you can execute your RaspberryPi controller here */
    /* You can use ua_outputs (which is updated before this function is called) to feed you controller */
    char outputProt[76];
    char btn[2];
    char status[4];
    int bytes_received;

    sprintf(btn, "%d", ua_outputs.changed); /* Captura mudanca no valor protocolo */
    /* TODO: Verificar se a mudanca do protocolo foi o aperto de um botao ou mudanca de parametro */
    sprintf(outputProt, "%s", ua_outputs.Protocolo); /* Captura estado atual do protocolo */

    if(strcmp(btn,"1\0") == 0){ /* Caso tenha ocorrido a mudanca (acao de um botao), envia o protocolo para o servidor */
        send(DF_output_socket, outputProt, sizeof(outputProt), MSG_DONTWAIT);
    }

    /* A Flag "MSG_DONTWAIT" deixa a funcao recv "non-blocking", ou seja, nao espera a chegada obrigatoria de bytes */
    bytes_received = recv(DF_output_socket, status, sizeof(status), MSG_DONTWAIT); /* Recebe mensagem do servidor*/
    if(bytes_received > 0) { /* Verifica a chegada de bytes pela porta de comunicacao */
        printf("bytes received: %d - data: %s\n", bytes_received, status);
        if(strcmp(status, "001\0") == 0){ /* Caso seja o caso de confirmacao de acao terminada */
            ua_inputs.ConfirmWalk = (kcg_bool) 1;   /* Seta input do modelo para TRUE */
            memset(status, 0, sizeof(status));  /* Reseta valor do Status recebido do servidor */
        }
        bytes_received = 0;
    } else {
        ua_inputs.ConfirmWalk = (kcg_bool) 0;   /* Reseta input do modelo para que ele volte ao estado inicial */
    }
}
