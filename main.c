/**
 * \file
 *
 *  Programa que comprueba si un número es un número de Armstrong.
 */
# include <stdio.h>
# include <math.h>
# include "stack.h"

int is_armstrong_number(int );

/**
 * La función principal del programa
 * 
 */
void main(){   
	int n;   
	printf("Introduce un número entero");   
	scanf("%d",&n);   
	if (is_armstrong_number(n))      
		printf("%d es un número de armstrong \U0001F60E \n", n);   
	else printf("%d no es un número de armstrong \U0001F622 \n", n);
}

/**
 * Función que devuelve verdadero si el número es un número de Armstrong
 */
int is_armstrong_number(int numb){   
	int j, remainder, temp, count, value;   
	temp=numb;   
	count=0;   
	while(numb >0)   {      
		remainder=numb%10;      
		push(remainder);      
		count++;      
		numb=numb/10;   
	}   numb=temp;   
	value=0;   
	while(top >=0)   {      
		j=pop();      
		value=value+pow(j,count);   
	}   
	
	if(value==numb)
		return 1;   
	else 
		return 0;
}
