/** \brief Busca en la LinkedList el id con el numero mayor, le suma uno y devuelve el resultado
 *
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, el proximo id para otorgar
 **/
int controller_setId(LinkedList* pArrayListEmployee);

/** \brief Busca el numero de id dado dentro de la LinkedList y devuelve el indice del elemento con ese ID.
 *
 * \param Puntero del tipo LinkedList a la lista
 * \param Un entero, el ID buscado
 * \return Un entero, el indice del elemento que tiene ese ID
 **/
int controller_getIndexById(LinkedList* pArrayLista,int idBuscado);

/** \brief Abre el archivo de tipo texto que se solicita y llama a la funcion parser_FromText
 *
 * \param Puntero al archivo, con su ruta correspondiente
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_loadFromText(char* path , LinkedList* pArrayLista);


/** \brief Abre el archivo de tipo binario que se solicita y llama a la funcion parser_FromBinary
 *
 * \param Puntero al archivo, con su ruta correspondiente
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee);

/** \brief Agrega un elemento a la lista
 *
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_addEstructura(LinkedList* pArrayLista);

/** \brief Modifica un elemento
 *
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_edit(LinkedList* pArrayListEmployee);

/** \brief Borra un elemento de la lista
 *
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_remove(LinkedList* pArrayLista);

/** \brief Imprime por pantalla la lista
 *
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_List(LinkedList* pArrayLista);

/** \brief Llama a las funciones de ordenamiento pasandole los parametros
 *
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_sort(LinkedList* pArrayListEmployee);

/** \brief Guarda la lista que esta en memoria dinamica en un archivo de texto csv
 *
 * \param Puntero al archivo, con su ruta correspondiente
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee);

/** \brief Guarda la lista que esta en memoria dinamica en un archivo binario
 *
 * \param Puntero al archivo, con su ruta correspondiente
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee);

/** \brief Llama a la funcion para que realize una modificacion a los elementos de la lista
 *
 * \param Puntero del tipo LinkedList a la lista
 * \return Un entero, 1 en caso de exito o 0 si hubo error
 **/
int controller_map(LinkedList* pArrayLista);
