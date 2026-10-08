/*Badillo Aguilar Nejoi
Practica 6
Ejercicio de tipos de variables, entradas y salidas*/

#include <stdio.h>

void main()
{
  int entnum;
  char carac = 65;  //convierte el numero en caracter ASCII.
  char carac2 = 'a';
  double punto;

//Asignar valores de teclado a una variable
printf("Escrba un valor entero:");
printf("%i", &entnum);
printf("Escriba un valor real: ");
scanf("%lf", &punto);

//Imprimir valores de formato
printf("\n Imprimiendo las variables \a\n");
printf("\t Valor de numero entero es: %i \n",entnum);
printf("\t Valor del caracter ASCII es: %c \n", carac);
printf("\t Valor del caracter es: %c \n", carac2);
printf("\t Valor del numero real es: %lf \n",punto);
}








  
