#include <stdio.h>

float media_final(int valor, int valido); 

int main()
{
	//alinea b
	
	int valor = 0;

	do
	{
		printf("valor: ");
		scanf("%d", &valor);

		if (valor > 0 && valor < 10)
			media_final(valor, 1);
		else
			printf("Media: %.2f\n", media_final(0, 0));
		
	} while (valor != 0);
	
	return 0;
}

float media_final(int valor, int valido) 
{
	//alinea a
	
	static float somador;
	static int contador;

	if (valido != 0)
	{
		somador += valor;
		contador++;
		return 0;
	}

	return somador / contador;
}