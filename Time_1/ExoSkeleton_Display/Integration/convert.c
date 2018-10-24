// Autor: Fabio Kfouri
// Data: 23/10/2018
// Objetivo: Conversao de Vetor numerico para Inteiro

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kcg_types.h"


//void convert2Int(char *Send, int *Value )
kcg_int32 convert2Int(/* Send/ */ T_String_02 *Send) 
{
    int temp = strtol(Send, NULL, 10);
    return temp;
}