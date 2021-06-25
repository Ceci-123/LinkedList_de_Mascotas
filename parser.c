#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "mascota.h"

int parser_FromText(FILE* pFile, LinkedList* pArrayLista)
{
    eMascota* pMascota;
    char idChar[21];
    char nombre[21];
    char edadChar[21];
    char pesoChar[21];
    char sexo;
    char raza[21];
    char auxiliar[120];
    int idNum;
    int edadNum;
    float pesoNum;

    if(pFile != NULL && pArrayLista != NULL)
    {
        fscanf(pFile,"%s\n", auxiliar);  //lectura fantasma del encabezado
        while(!feof(pFile))
        {
             printf("Entre en el while del parser");
             system("pause");
             fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n]\n",&idChar,nombre,&edadChar,&pesoChar,&sexo,raza);
             idNum = atoi(idChar);
             edadNum = atoi(edadChar);
             pesoNum = atof(pesoChar);
             pMascota = mascota_newParametros(&idNum,nombre,&edadNum,&pesoNum, &sexo, raza);

             ll_add(pArrayLista,pMascota);
        }
    }

    return 1;
}

int parser_FromBinary(FILE* pFile, LinkedList* pArrayLista)
{
    eMascota* pMascota;
    int devolucionFread;

    fseek(pFile,33,SEEK_SET);
    while(!feof(pFile))
    {
        pMascota = mascota_new();
        devolucionFread = fread(pMascota,sizeof(eMascota),1,pFile);
        if(devolucionFread != 1)
        {
            break;
        }
        ll_add(pArrayLista,pMascota);

    }
    return 1;
}
