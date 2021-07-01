#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mascota.h"


eMascota* mascota_newParametros(char* idStr, char* nombreStr, char* edadStr, char* pesoStr,char* sexoStr,char* razaStr)
{
    int flag = 0;
    eMascota* pMascota = mascota_new();

    if(pMascota != NULL)
    {
        if(mascota_setId(pMascota, atoi(idStr)) == 1 &&
           mascota_setNombre(pMascota, nombreStr)==1 &&
           mascota_setEdad(pMascota, atoi(edadStr))==1 &&
           mascota_setPeso(pMascota, atof(pesoStr))==1 &&
           mascota_setSexo(pMascota,sexoStr[0])==1 &&
           mascota_setRaza(pMascota, razaStr)==1)
           {
               flag = 1;
           }
        if(flag == 0)
        {
            printf("Ocurrio un error al inicializar la mascota");
            system("pause");
        }
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
    if(pMascota !=NULL)
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

int mascota_CompareByName(void* m1, void* m2)
{
    int resultado;
    eMascota* auxiliar1 = NULL;
    eMascota* auxiliar2 = NULL;

    if(m1 != NULL && m2 != NULL)
    {
        auxiliar1 = (eMascota*) m1;
        auxiliar2 = (eMascota*) m2;
        resultado = strcmp(auxiliar1->nombre, auxiliar2->nombre);
    }
    return resultado;
}

int mascota_CompareByEdad(void* m1, void* m2)
{
    int resultado;
    eMascota* auxiliar1 = NULL;
    eMascota* auxiliar2 = NULL;

    if(m1 != NULL && m2 != NULL)
    {
        auxiliar1 = (eMascota*) m1;
        auxiliar2 = (eMascota*) m2;
       if(auxiliar1->edad > auxiliar2->edad)
    {
        resultado = 1;
    }
    else
    {
        if(auxiliar1->edad < auxiliar2->edad)
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

int mascota_CompareById(void* m1, void* m2)
{
    int resultado;
    eMascota* auxiliar1 = NULL;
    eMascota* auxiliar2 = NULL;

    if(m1 != NULL && m2 != NULL)
    {
        auxiliar1 = (eMascota*) m1;
        auxiliar2 = (eMascota*) m2;
       if(auxiliar1->id > auxiliar2->id)
    {
        resultado = 1;
    }
    else
    {
        if(auxiliar1->id < auxiliar2->id)
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

int mascota_CompareByPeso(void* m1, void* m2)
{
    int resultado;
    eMascota* auxiliar1 = NULL;
    eMascota* auxiliar2 = NULL;

    if(m1 != NULL && m2 != NULL)
    {
       auxiliar1 = (eMascota*) m1;
       auxiliar2 = (eMascota*) m2;
       if(auxiliar1->peso > auxiliar2->peso)
    {
        resultado = 1;
    }
    else
    {
        if(auxiliar1->peso < auxiliar2->peso)
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

int mascota_CompareBySexo(void* m1, void* m2)
{
    int resultado;
    eMascota* auxiliar1 = NULL;
    eMascota* auxiliar2 = NULL;

    if(m1 != NULL && m2 != NULL)
    {
       auxiliar1 = (eMascota*) m1;
       auxiliar2 = (eMascota*) m2;
       if(auxiliar1->sexo > auxiliar2->sexo)
    {
        resultado = 1;
    }
    else
    {
        if(auxiliar1->sexo < auxiliar2->sexo)
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

int mascota_CompareByRaza(void* m1, void* m2)
{
    int resultado;
    eMascota* auxiliar1 = NULL;
    eMascota* auxiliar2 = NULL;

    if(m1 != NULL && m2 != NULL)
    {
        auxiliar1 = (eMascota*) m1;
        auxiliar2 = (eMascota*) m2;
        resultado = strcmp(auxiliar1->raza, auxiliar2->raza);
    }
    return resultado;
}

int contadorPerrosAdultos(void* elemento)
{
    int todoOk = 0;
    eMascota* pMascota = NULL;
    pMascota = (eMascota*)elemento;
    int edad;
    int contadorAdultos = 0;
    mascota_getEdad(pMascota, &edad);

    if(edad >= 5){
        todoOk = 1;
        contadorAdultos ++;
    }
    printf("hay %d perros adultos", contadorAdultos);
    system("pause");
    return todoOk;
}

int filterCachorros(void* pElement)
{
    int retorno = 0;
    eMascota* auxiliar = NULL;
    auxiliar = (eMascota*) pElement;
    if(auxiliar->edad < 10)
    {
        retorno = 1;
    }
    return retorno;
}

int filterHembras(void* pElement)
{
    int retorno = 0;
    eMascota* auxiliar = NULL;
    auxiliar = (eMascota*) pElement;
    if(auxiliar->sexo == 'h')
    {
        retorno = 1;
    }
    return retorno;
}

int filterBunny(void* pElement)
{
    int retorno = 0;
    eMascota* auxiliar = NULL;
    auxiliar = (eMascota*) pElement;
    if(!strcmp(auxiliar->nombre,"Bunny")  )
    {
        retorno = 1;
    }
    return retorno;
}

int funcionDeMapeo(void* pElement)
{
    int retorno = 0;
    eMascota* auxiliar = NULL;
    auxiliar = (eMascota*) pElement;
    if(auxiliar->edad > 2)
    {
      auxiliar->edad = 19;
      retorno = 1;
    }
    return retorno;
}
