int Suma(int numeroUno, int numeroDos)
{
	return(numeroUno+numeroDos);
}

int Resta(int numeroUno, int numeroDos)
{
	return(numeroUno-numeroDos);
}

int Producto(int numeroUno, int numeroDos)
{
	return(numeroUno*numeroDos);
}

float Division(int numeroUno, int numeroDos)
{
	if(numeroDos==0)
	{
		return(0);
	}
	else
	{
		return((float)numeroUno / numeroDos);
	}
}
