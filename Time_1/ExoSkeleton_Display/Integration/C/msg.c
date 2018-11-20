// Autor: Marcelo Paiva
// Data: 06/10/2017
// Objetivo: Integracao do CDS SCADE R18 com o Kafka, topico: erlun

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int msg( char *Send )
{
    char cmd[4], cmdKafka[200]="python C:\\Users\\Paiva\\SCADE\\STAMPS-TR\\\Integration\\send2Bridge.py ";
    strncpy(cmd, Send, 4);
    if(strncmp(cmd, " ", 1) != 0)
    {
	    strcat(cmdKafka, cmd);
	    system(cmdKafka);	    
    }
    return 0;
}
