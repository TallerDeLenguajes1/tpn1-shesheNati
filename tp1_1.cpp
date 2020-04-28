#include <stdio.h>

int main()
{
    int variable = 123;
    int *punt_var;
    punt_var = &variable;

    printf("Contenido del puntero: %d\n",*punt_var);
    printf("Direccion de memoria almacenada por el puntero:%p\n",punt_var);
    printf("Direccion de memoria de la variable: %p\n", &variable);
    printf("El tamaño de memoria de variable usando sizeof(): %d\n", sizeof(int));
    getchar();
    return 0;
}