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

/** \brief Crea un espacio en memoria dinámica para la mascota, pasandole los parámetros que quiero agregar
 *
 * \param Un puntero a char, el id
 * \param Un puntero a char, el nombre
 * \param Un puntero a char, la edad
 * \param Un puntero a char, el peso
 * \param Un puntero a char, el sexo
 * \param Un puntero a char, la raza
 * \return Puntero a la estructura creada
 **/
eMascota* mascota_newParametros(char* idStr, char* nombreStr, char* edadStr, char* pesoStr,char* sexoStr,char* razaStr);

/** \brief Crea un espacio en memoria dinámica para la estructura mascota
 *
 * \return Puntero a la mascota
 **/
eMascota* mascota_new();

/** \brief Escribe la variable parámetro en el campo ID de la estructura
 *
 * \param Puntero a la mascota
 * \param Un entero, el id
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_setId(eMascota* pMascota, int id);

/** \brief Escribe la variable pasada como parámetro en el campo NOMBRE de la estructura
 *
 * \param Puntero a la mascota
 * \param Un puntero a char, el nombre a escribir
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_setNombre(eMascota* pMascota,char* nombre);

/** \brief Escribe la variable pasada como parámetro en el campo edad de la estructura
 *
 * \param Puntero a la mascota
 * \param Un entero, la edad
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_setEdad(eMascota* pMascota,int edad);

/** \brief Escribe la variable pasada como parámetro en el campo peso de la estructura
 *
 * \param Puntero a la mascota
 * \param Un entero, el peso
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_setPeso(eMascota* pMascota,float peso);

/** \brief Escribe la variable pasada como parámetro en el campo raza de la estructura
 *
 * \param Puntero a la mascota
 * \param Un puntero a char, la raza
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_setRaza(eMascota* pMascota,char* raza);

/** \brief Escribe la variable pasada como parámetro en el campo sexo de la estructura
 *
 * \param Puntero a la mascota
 * \param Un char, el sexo
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_setSexo(eMascota* pMascota,char sexo);

/** \brief Lee el valor del campo NOMBRE de la estructura mascota y lo copia en la variable pasada como parametro
 *
 * \param Puntero a la mascota
 * \param Un puntero a char, el nombre a leer
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_getNombre(eMascota* pMascota, char* nombre);

/** \brief Lee el valor del campo edad de la estructura mascota y lo copia en la variable pasada como parametro
 *
 * \param Puntero a la mascota
 * \param Un entero, la edad
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_getEdad(eMascota* pMascota,int* edad);

/** \brief Lee el valor del campo peso de la estructura mascota y lo copia en la variable pasada como parametro
 *
 * \param Puntero a la mascota
 * \param Un flotante, el peso
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_getPeso(eMascota* pMascota,float* peso);

/** \brief Lee el valor del campo sexo de la estructura mascota y lo copia en la variable pasada como parametro
 *
 * \param Puntero a la mascota
 * \param Un char, el sexo
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_getSexo(eMascota* pMascota,char* sexo);

/** \brief Lee el valor del campo raza de la estructura mascota y lo copia en la variable pasada como parametro
 *
 * \param Puntero a la mascota
 * \param Un puntero a char, la raza
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_getRaza(eMascota* pMascota,char* raza);

/** \brief Lee el valor del campo id de la estructura mascota y lo copia en la variable pasada como parametro
 *
 * \param Puntero a la mascota
 * \param Un entero, el id
 * \return Un entero, 1 si lo pudo escribir y 0 si hubo error
 **/
int mascota_getId(eMascota* pMascota,int* id);

/** \brief Compara el campo nombre de ambas estructuras mascota y devuelve el resultado
 *
 * \param  Puntero a void, para la primer mascota
 * \param  Puntero a void, para la segunda mascota
 * \return Un entero, si las cadenas son iguales retornara un valor 0, si la primera cadena es mayor
 *         retornara un valor positivo y si es menor retornara un valor negativo.
 **/
int mascota_CompareByName(void* m1, void* m2);

/** \brief Compara el campo edad de ambas estructuras mascota y devuelve el resultado
 *
 * \param Puntero a void para la primer mascota
 * \param Puntero a void para la segunda mascota
 * \return Un entero, devuelve 1(si el primero es mayor que el segundo),
 *        -1 (si el primero es menor que el segundo) o 0 si son iguales
 **/
int mascota_CompareByEdad(void* m1, void* m2);

/** \brief Compara el campo id de ambas estructuras mascota y devuelve el resultado
 *
 * \param Puntero a void, para la primer mascota
 * \param Puntero a void, para la segunda mascota
 * \return Un entero, devuelve 1(si el primero es mayor que el segundo),
 *        -1 (si el primero es menor que el segundo) o 0 si son iguales
 **/
int mascota_CompareById(void* m1, void* m2);

/** \brief Compara el campo peso de ambas estructuras mascota y devuelve el resultado
 *
 * \param Puntero a void, para la primer mascota
 * \param Puntero a void, para la segunda mascota
 * \return Un entero, devuelve 1(si el primero es mayor que el segundo),
 *        -1 (si el primero es menor que el segundo) o 0 si son iguales
 **/
int mascota_CompareByPeso(void* m1, void* m2);

/** \brief Compara el campo sexo de ambas estructuras mascota y devuelve el resultado
 *
 * \param Puntero a void, para la primer mascota
 * \param Puntero a void, para la segunda mascota
 * \return Un entero, devuelve 1(si el primero es mayor que el segundo),
 *        -1 (si el primero es menor que el segundo) o 0 si son iguales
 **/
int mascota_CompareBySexo(void* m1, void* m2);

/** \brief Compara el campo raza de ambas estructuras mascota y devuelve el resultado
 *
 * \param  Puntero a void, para la primer mascota
 * \param  Puntero a void, para la segunda mascota
 * \return Un entero, si las cadenas son iguales retornara un valor 0, si la primera cadena es mayor
 *         retornara un valor positivo y si es menor retornara un valor negativo.
 **/
int mascota_CompareByRaza(void* m1, void* m2);

int contadorPerrosAdultos(void* elemento);

int filterCachorros(void* pElement);

int filterHembras(void* pElement);

int filterBunny(void* pElement);

int funcionDeMapeo(void* pElement);

#endif // MASCOTA_H_INCLUDED
