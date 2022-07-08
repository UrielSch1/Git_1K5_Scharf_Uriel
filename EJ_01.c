#include<stdio.h>
#include<stdlib.h>

/*
Scharf Uriel Jacobo, 1K5, 55803
 */

int Fibonacci(int x);

main()
{
	int x=0, resultado=0;
	
	printf("Calculadora Fibonacci\n\nIngrese un numero: ");
	scanf("%d", &x);
	
	resultado=Fibonacci(x);
	
	if(resultado==-1)
	{
		printf("\nEl numero ingresado no es valido");
	}
	else
	{
		printf("\nResultado: %d", resultado);
	}
	
	printf("\n\n");
	system("pause");
}

int Fibonacci(int x)
{	

	if(x<0)
	{
		return(-1);
	}
	else
	{
		if(x==1)
		{
			return(1);
		}
		else
		{
			if(x==0)
			{
				return(0);
			}
			else
			{
				return( (Fibonacci(x-1)) + (Fibonacci(x-2)) );
			}
		}
	}	
}
