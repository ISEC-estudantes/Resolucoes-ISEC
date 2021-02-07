#include <string.h>
#include <stdio.h>
#define TAM 100


int LimparEspacos(char frase[]);

void main()
{
	char frase[] = "  Hoje  chegou   o cheque  do chefe para pagar  os chazinhos  do outro  chato  ";
	puts(frase);
	printf("Numero de carateres: %1.1d\n", strlen(frase));
	printf("Espacos retirados: %1.1d\n", LimparEspacos(frase));
	puts(frase);
	printf("Numero de carateres: %1.1d\n", strlen(frase));
}

int LimparEspacos(char frase[])
{
	char string_apoio[TAM];
	int i = 0, k = 0;
	int contador = 0;
	int check = 0;
	
	for(i = 0; i < strlen(frase); i++)
	{
		if(i == 0)
		{
			if (frase[0] != ' ')
			{
				string_apoio[k] = frase[i];
				k++;
			}
			else
				contador++;
		}
		else
		{
			if(frase[i] == ' ')
			{
				if (frase[i - 1] != ' ')
				{
					string_apoio[k] = frase[i];
					k++;
				}
				else
					contador++;

			}
			else
			{
				string_apoio[k] = frase[i];
				k++;
			}
		}
	}

	string_apoio[k] = '\0';

	strcpy(frase, string_apoio);

	return contador;
}