#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED

int menuOpciones(void);
int reCall(void);
int obtenerNumero(char mensaje[]);
int validacionDeNumero(int numero,int minimo, int maximo);
int sonLetras(char cadena[]);
int validacionSexo(char sexo);
int validacionDeNumero(int numero,int minimo, int maximo);
float validacionDeNumeroFloat(float numero,int minimo, int maximo);
float obtenerNumeroFlotante(char mensaje[]);
void pedirNombreArchivoTexto(char* nombre);
void pedirNombreArchivoBinario(char* nombre);

#endif // VALIDACIONES_H_INCLUDED
