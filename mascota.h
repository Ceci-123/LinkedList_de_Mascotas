#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED

typedef struct
{
    int id;
    char nombre[20];
    int edad;
    float peso;
    char sexo;
    char raza[20];
}eMascota;

eMascota* mascota_newParametros(int* id, char* nombre, int* edad, float* peso,char* sexo,char* raza);
eMascota* mascota_new();
int mascota_setId(eMascota* pMascota, int id);
int mascota_setNombre(eMascota* pMascota,char* nombre);
int mascota_setEdad(eMascota* pMascota,int edad);
int mascota_setPeso(eMascota* pMascota,float peso);
int mascota_setRaza(eMascota* pMascota,char* raza);
int mascota_setSexo(eMascota* pMascota,char sexo);
int mascota_getNombre(eMascota* pMascota, char* nombre);
int mascota_getEdad(eMascota* pMascota,int* edad);
int mascota_getPeso(eMascota* pMascota,float* peso);
int mascota_getSexo(eMascota* pMascota,char* sexo);
int mascota_getRaza(eMascota* pMascota,char* raza);
int mascota_getId(eMascota* pMascota,int* id);
int mascota_CompareByName(eMascota* m1, eMascota* m2);
int mascota_CompareByEdad(eMascota* m1, eMascota* m2);
int mascota_CompareById(eMascota* m1, eMascota* m2);
int mascota_CompareByPeso(eMascota* m1, eMascota* m2);
int mascota_CompareBySexo(eMascota* m1, eMascota* m2);
int mascota_CompareByRaza(eMascota* m1, eMascota* m2);

#endif // MASCOTA_H_INCLUDED
