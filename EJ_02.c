#include<stdio.h>
#include<stdlib.h>
#include"Libreria_EJ_02.h"

/*
Scharf Uriel Jacobo, 1K5, 55803
 */

main()
{
	int numeroUno=0, numeroDos=0;
	
	printf("Ingrese primer numero: ");
	scanf("%d", &numeroUno);
	
	printf("\nIngrese segundo numero: ");
	scanf("%d", &numeroDos);
	
	printf("\n\nSuma: %d + %d = %d", numeroUno, numeroDos, Suma(numeroUno, numeroDos));
	
	printf("\nResta: %d - %d = %d", numeroUno, numeroDos, Resta(numeroUno, numeroDos));
	
	printf("\nProducto: %d * %d = %d", numeroUno, numeroDos, Producto(numeroUno, numeroDos));
	
	if(numeroDos!=0)
	{
		printf("\nDivision: %d / %d = %.2f", numeroUno, numeroDos, Division(numeroUno, numeroDos));
	}
	else
	{
		printf("\n%d + %d = error, no esta definida la division en 0", numeroUno, numeroDos);
	}
	
	printf("\n\n");
	system("pause");
}
