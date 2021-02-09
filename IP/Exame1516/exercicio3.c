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
	int i = 0, k = 0; /*variaveis para controlo dos ciclos for*/

	int suporte = 0;



	if (strlen(st1) == 0 && strlen(st2) == 0) /*se as duas strings tiverem vazias, devolve 0*/
		return 0;
	/*o resto do codigo podia ser posto dentro de um else, mas é redudante por que a função termina se a condição do primeiro if for verdadeira*/

	if (strlen(st1) < strlen(st2)) /*o suporte vai guardar o valor da frase menor*/
		suporte = strlen(st1);
	else
		suporte = strlen(st2);



	/*popular o stfim com o conteudo do st1*/
	for (i = 0; i < strlen(st1); i++)
	{
		stfim[k] = st1[i];
		if (i < suporte)
		{
			k += 2; /*para ir populando 2 a 2*/
		}
		else /*caso o st1 for a frase maior ele vai continuar a popular em frente 1 a 1*/
		{
			k++;
		}
	}

	/*popular o stfim com o conteudo do st2*/

	k = 1; /*reinicializar o k a 1 para começar a escrever no stfim a partir do stfim[1]*/

	for (i = 0; i < strlen(st2); i++)
	{
		stfim[k] = st2[i];

		if (i < suporte)
		{
			k += 2;
		}
		else
		{
			k++;
		}
	}

	return 1;
}