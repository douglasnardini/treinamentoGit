#include <stdio.h>
int main ()

{
	
   int vet [8] = {5,1,4,2,7,8,3,6}; 
   int aux,contr;
	for (int contr=7;contr>=4;contr--);

   {

      aux=vet[7-contr];

      vet[7-contr]=vet[contr];

      vet[contr]=aux;
      
}
printf ("%d\n",vet[0]);
printf ("%d\n",vet[1]);
printf ("%d\n",vet[2]);
printf ("%d\n",vet[3]);
printf ("%d\n",vet[4]);
printf ("%d\n",vet[5]);
printf ("%d\n",vet[6]);
printf ("%d\n",vet[7]);

}
