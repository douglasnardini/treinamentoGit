#include <stdio.h>
#include <locale.h>
int main()
{
	
	setlocale(LC_ALL, "Portuguese""");
int vetor[3],contador;
 
contador = 0;
//vetor [3] = 4;

do {
printf ("Digite um número nessa bagaça:\n");
//fflush(stdin);
scanf("%d",&vetor[contador]);
contador ++;
}while (contador<3 ); 

printf("Valor salvo é: %d\n",vetor[0]);
printf("Valor salvo é: %d\n",vetor[1]);
printf("Valor salvo é: %d\n",vetor[2]);
printf("A variável contador ficou com o valor: %d",contador);
return 0;
}
