#include <stdio.h>
#include <locale.h>
int main()
{
	
	setlocale(LC_ALL, "Portuguese""");
int vetor[3],contador;
 
contador = 0;
//vetor [3] = 4;

do {
printf ("Digite um n�mero nessa baga�a:\n");
//fflush(stdin);
scanf("%d",&vetor[contador]);
contador ++;
}while (contador<3 ); 

printf("Valor salvo �: %d\n",vetor[0]);
printf("Valor salvo �: %d\n",vetor[1]);
printf("Valor salvo �: %d\n",vetor[2]);
printf("A vari�vel contador ficou com o valor: %d",contador);
return 0;
}
