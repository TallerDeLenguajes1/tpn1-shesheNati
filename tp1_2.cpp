#include <stdio.h>

//declaraciones de las funciones
int calcularCuadrado(int numero);
void cuadrado(int *numero);
void muestra(int &numero);
void invertir(int a, int b);
void devuelve_ascendente(int &a, int &b);

//Main

int main()
{
    int num = 123, num1 = 12 ,num2 = 456, A = 200, B = 5,  resultado;
    resultado =calcularCuadrado(num);
    
    printf("El valor original = %d\n", num1);
    cuadrado (&num1); //envia la direccion de la variable (un puntero)
    printf("Valor al cuadrado = %d\n", num1);
    printf("____________________________________________________________\n");
    printf("El cuadrado de num:\n %d = %d \n",num, resultado);
    printf("____________________________________________________________\n");
    muestra(num2);
    printf("____________________________________________________________\n");
    invertir(A,B);
    printf("____________________________________________________________\n");
    devuelve_ascendente(A,B); 
    printf("____________________________________________________________\n");
    getchar();
    return 0;
}

//Funciones

/*funcion que devuelve el cuadrado de un numero*/
int calcularCuadrado(int numero)
{
    return(numero * numero);
}

/*haga la funcion anterior pero mostrando un tipo void*/
void cuadrado(int *numero) //recibe un puntero a un entero
{
    *numero = *numero * *numero; //*numero valor de la variable apuntada por numero
}

/*al recibir una variable muestre por pantalla la direccion y el contenido de la variable*/
void muestra(int &numero)
{
    int *aux;
    aux = &numero;
    printf("Direccion de memoria de num2 = %p\n", &aux);
    printf("Contenido de la variable num2= %d\n",*aux);
}

//dado dos parametros de entrada, debera invertir los valores entre ambos
//debera devolver en el valor de a en la variable b y en b el valor de a
void invertir(int a, int b)
{
    int *punt_a, *punt_b;
    punt_a = &a;
    punt_b = &b;

    printf("Valor de a = %d \nValor invertido de a = %d\n",a , *punt_b);
    printf("Valor de b = %d \nValor invertido de b = %d\n",b , *punt_a);
}

/*dado dos parametros de entrada, debera devolverlos de forma ordenada, en el primer parametro el menor
 y en el segundo el mayor*/
 void devuelve_ascendente(int &a, int &b)
 {
     int *punt;
     punt = &a;

     if(a>b)
     {
        printf("Menor: %d Mayor : %d ", b, *punt);
     }
     else
     {
         printf("Menor: %d Mayor :%d", *punt ,b);
     }
     
 } 

 //utilice la funcion anterior para leer pares de valores e imprimirlos por pantalla de forma ordenada
