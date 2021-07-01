#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "mascota.h"

int parser_FromText(FILE* pFile, LinkedList* pArrayLista)
{
    eMascota* pMascota = NULL;
    char auxNombre[128];
    char auxSexo[3];
    char auxRaza[21];
    char auxId[21];
    char auxEdad[21];
    char auxPeso[21];
    int retorno = 0;

    if(pFile != NULL && pArrayLista != NULL)
    {
        //lectura fantasma del encabezado
        fscanf(pFile,"%s\n",auxNombre);

        while(!feof(pFile))
        {
           if(fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^,],%[^\n] \n",auxId,auxNombre,auxEdad,auxPeso,auxSexo,auxRaza) == 6)
           {
               pMascota = mascota_newParametros(auxId, auxNombre,auxEdad, auxPeso,auxSexo,auxRaza);
               ll_add(pArrayLista,pMascota);

           }
            else
            {
                break;
            }
        }
        retorno = 1;
    }

    return retorno;
}

int parser_FromBinary(FILE* pFile, LinkedList* pArrayLista)
{
    eMascota* pMascota;
    int devolucionFread;
    int retorno = 0;

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
        retorno = 1;
    }
    return retorno;
}
