#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Programa principal */
int main() {
	
	/* Declaramos variables necesarias */
	float cat_1;
	float cat_2;
	float diagonal;
	
	/* Se ingresa y guarda el cateto 1 */
	printf("Ingrese el valor del cateto 1: \n");
	scanf("%f",&cat_1);
	
	/* Se ingresa y guarda el cateto 2 */
	printf("Ingrese el valor del cateto 2: \n");
	scanf("%f",&cat_2);
	
	/* Calculamos hipotenusa y mostramos el resultado */
	diagonal=sqrt((cat_1*cat_1)+(cat_2*cat_2));
	printf("La hipotenusa del triangulo es: %.2f \n",diagonal);
	return 0;
} 
