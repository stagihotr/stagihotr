/* Autor: Fabio Kfouri
 Data: 23/10/2018
 Objetivo: Conversao de Vetor numerico para Inteiro
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kcg_types.h"


/*void convert2Int(char *Send, int *Value )*/
kcg_int32 convert2Int(/* Send/ */ T_String_02 *Send) 
{
    int temp = strtol(Send, NULL, 10);
    return temp;
}


/*void convert2Char(char *Send, int *Value )*/
void convert2Char_1(/* Send/ */ kcg_int32 *Send, /* Output/ */ char *Output) 
{
	char temp[10];
	sprintf(temp, "%%0%id", 1);

	char numb[100];
	sprintf(numb, temp, Send);

	strcpy(Output, numb);

}

/*void convert2Char(char *Send, int *Value )*/
void convert2Char_3(/* Send/ */ kcg_int32 *Send, /* Output/ */ char *Output) 
{
	char temp[10];
	sprintf(temp, "%%0%id", 3);

	char numb[100];
	sprintf(numb, temp, Send);

	strcpy(Output, numb);

}