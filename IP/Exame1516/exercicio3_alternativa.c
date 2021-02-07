#include <stdio.h>
#include <string.h>

#define TAMFRASE 50
#define TAMFIM 75

int func(char st1[], char st2[], char stfim[], int tamf);

void main()
{
	char f1[TAMFRASE], f2[TAMFRASE], final[TAMFIM] = "";
	printf("Indique a frase 1: "); gets(f1);
	printf("Indique a frase 2: "); gets(f2);
	if (func(f1, f2, final, TAMFIM))
		printf("Frase modificada : \n % s\n", final);
	else
		printf("Frase n�o modificada!\n");
}

/*Resolução do exercicio 3*/

int func(char st1[], char st2[], char stfim[], int tamf)
{
	int i = 0, k = 0; /*variáveis para controlo dos ciclos for*/

	int variavel_de_apoio = 0;

	if (strlen(st1) == 0 && strlen(st2) == 0) /*se as duas strings tiverem vazias, devolve 0*/
		return 0;
	/*o resto do código podia ser posto dentro de um else, mas é redudante por que a função termina se a condição do primeiro if for verdadeira*/

	for(i=0;i<tamf;i++)
	{
		if(i % 2 == 0) //preencher elementos pares
		{
			if (k < strlen(st1)) //verificar se o k já ultrapassou o tamanho da st1
				stfim[i] = st1[k];
			else
			{
				if (k < strlen(st2)) //verificar se o k já ultrapassou o tamanho da st2
				{
					stfim[i] = st2[k]; 
					k++;
				}
				else
					break;
			
			}
		}
		else //preencher elementos impares
		{
			if (k < strlen(st2)) //verificar se o k já ultrapassou o tamanho da st2
				stfim[i] = st2[k];
			else
			{
				k++; //como não estou a incrementar quando preencho os pares, tenho que incrementar aqui também
				if (k < strlen(st1))
					stfim[i] = st1[k];
				else
					break;
			} 
			k++;
		}
	}

	return 1;
}