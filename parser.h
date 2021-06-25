/** \brief Lee un archivo de texto, parsea y guarda en variables, le asigna los valores
 *          de esas variables a un nuevo empleado y lo agrega a la lista
 * \param Puntero del tipo FILE al archivo
 * \param Puntero a la lista
 * \return Un entero, 1 si tuvo exito y 0 si hubo error
 *
 */
int parser_FromText(FILE* pFile , LinkedList* pArrayLista);

/** \brief Lee un archivo binario, parsea y guarda en una variable de tipo empleado, y lo agrega en la lista
 *
 * \param Puntero del tipo FILE al archivo
 * \param Puntero a la lista
 * \return Un entero, 1 si tuvo exito y 0 si hubo error
 *
 */
int parser_FromBinary(FILE* pFile , LinkedList* pArrayLista);
