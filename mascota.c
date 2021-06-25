#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mascota.h"

eMascota* mascota_newParametros(int* id, char* nombre, int* edad, float* peso,char* sexo,char* raza)
{
    eMascota* pMascota;
    pMascota = mascota_new();

    if(pMascota != NULL)
    {
        mascota_setId(pMascota, *id);
        mascota_setNombre(pMascota, nombre);
        mascota_setEdad(pMascota, *edad);
        mascota_setPeso(pMascota, *peso);
        mascota_setSexo(pMascota, *sexo);
        mascota_setRaza(pMascota, raza);

    }
    return pMascota;
}

eMascota* mascota_new()
{
    eMascota* pMascota = NULL;
    pMascota = malloc(sizeof(eMascota));
    if(pMascota == NULL)
    {
        printf("No hay espacio suficiente en memoria\n");

    }
    return pMascota;
}
int mascota_setId(eMascota* pMascota, int id)
{
    int todoOk = 0;

    if(pMascota !=NULL && id > 0)
    {
       pMascota->id = id;
       todoOk = 1;
    }
    return todoOk;

}

int mascota_setNombre(eMascota* pMascota,char* nombre)
{
    int todoOk= 0;
    if(pMascota !=NULL && nombre != NULL)
    {
       strcpy(pMascota->nombre, nombre);
       todoOk = 1;
    }
    return todoOk;
}

int mascota_setRaza(eMascota* pMascota,char* raza)
{
    int todoOk= 0;
    if(pMascota !=NULL && raza != NULL)
    {
       strcpy(pMascota->raza, raza);
       todoOk = 1;
    }
    return todoOk;
}

int mascota_setSexo(eMascota* pMascota,char sexo)
{
    int todoOk= 0;
    if(pMascota !=NULL && (sexo == 'm') || (sexo =='f' ))
    {
       pMascota->sexo = sexo;
       todoOk = 1;
    }
    return todoOk;
}

int mascota_getId(eMascota* pMascota,int* id)
{
    int todoOk = 0;
    if(pMascota !=NULL && id != NULL)
    {
        *id = pMascota->id;
        todoOk = 1;
    }
    return todoOk;

}

int mascota_setEdad(eMascota* pMascota,int edad)
{
    int todoOk = 0;

    if(pMascota != NULL && edad > 0)
    {
       pMascota->edad = edad;
       todoOk = 1;
    }
    return todoOk;

}

int mascota_setPeso(eMascota* pMascota,float peso)
{
    int todoOk = 0;

    if(pMascota != NULL && peso > 0)
    {
       pMascota->peso = peso;
       todoOk = 1;
    }
    return todoOk;

}

int mascota_getNombre(eMascota* pMascota, char* nombre)
{
    int todoOk = 0;
    if(pMascota !=NULL && nombre != NULL)
    {
       strcpy(nombre,pMascota->nombre);
       todoOk = 1;
    }
    return todoOk;

}

int mascota_getEdad(eMascota* pMascota,int* edad)
{
    int todoOk = 0;

    if(pMascota != NULL && edad != NULL)
    {
       *edad = pMascota->edad;
        todoOk = 1;
    }
    return todoOk;
}

int mascota_getPeso(eMascota* pMascota,float* peso)
{
    int todoOk = 0;

    if(pMascota != NULL && peso != NULL)
    {
       *peso = pMascota->peso;
        todoOk = 1;
    }
    return todoOk;
}

int mascota_getSexo(eMascota* pMascota,char* sexo)
{
   int todoOk = 0;

    if(pMascota != NULL && sexo != NULL)
    {
       *sexo = pMascota->sexo;
        todoOk = 1;
    }
    return todoOk;
}

int mascota_getRaza(eMascota* pMascota,char* raza)
{
    int todoOk = 0;
    if(pMascota !=NULL && raza != NULL)
    {
       strcpy(raza,pMascota->raza);
       todoOk = 1;
    }
    return todoOk;

}

int mascota_CompareByName(eMascota* m1, eMascota* m2)
{
    int resultado;

    if(m1 != NULL && m2 != NULL)
    {
        resultado = strcmp(m1->nombre, m2->nombre);
    }
    return resultado;
}

int mascota_CompareByEdad(eMascota* m1, eMascota* m2)
{
    int resultado;

    if(m1 != NULL && m2 != NULL)
    {
       if(m1->edad > m2->edad)
    {
        resultado = 1;
    }
    else
    {
        if(m1->edad < m2->edad)
        {
            resultado = -1;
        }
        else
        {
            resultado = 0;
        }
    }

    }
   return resultado;
}

int mascota_CompareById(eMascota* m1, eMascota* m2)
{
    int resultado;

    if(m1 != NULL && m2 != NULL)
    {
       if(m1->id > m2->id)
    {
        resultado = 1;
    }
    else
    {
        if(m1->id < m2->id)
        {
            resultado = -1;
        }
        else
        {
            resultado = 0;
        }
    }

    }
   return resultado;
}

int mascota_CompareByPeso(eMascota* m1, eMascota* m2)
{
    int resultado;

    if(m1 != NULL && m2 != NULL)
    {
       if(m1->peso > m2->peso)
    {
        resultado = 1;
    }
    else
    {
        if(m1->peso < m2->peso)
        {
            resultado = -1;
        }
        else
        {
            resultado = 0;
        }
    }

    }
   return resultado;
}

int mascota_CompareBySexo(eMascota* m1, eMascota* m2)
{
    int resultado;

    if(m1 != NULL && m2 != NULL)
    {
       if(m1->sexo > m2->sexo)
    {
        resultado = 1;
    }
    else
    {
        if(m1->sexo < m2->sexo)
        {
            resultado = -1;
        }
        else
        {
            resultado = 0;
        }
    }

    }
        //resultado = strcmp(m1->sexo, m2->sexo);
    return resultado;
}

int mascota_CompareByRaza(eMascota* m1, eMascota* m2)
{
    int resultado;

    if(m1 != NULL && m2 != NULL)
    {
        resultado = strcmp(m1->raza, m2->raza);
    }
    return resultado;
}
