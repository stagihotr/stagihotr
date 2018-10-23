// Autor: Fabio Kfouri
// Data: 23/10/2018
// Objetivo: Integracao do CDS SCADE R18 com o Kafka, topico: erlun

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kcg_types.h"

void convert( char *Send, int *value )
{
    *value = strtol(Send, NULL,10);
}
