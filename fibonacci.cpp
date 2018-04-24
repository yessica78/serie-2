#include<stdio.h>
#include<stdlib.h>

int main()
{ 
   printf("\n Algoritmo de la serie de fibonacci para N numeros");
   int i,numero,anterior1=1,anterior2=1,fibo=1;
   printf ("\n Indique hasta que numero quiere ver la serie de Fibonnaci");
   scanf("%d",&numero);
   printf ("%d",anterior1);
   for(i=2; i<=numero;i++){
   	  printf("%d",fibo);
   	  fibo=anterior1+anterior2;
   	  anterior1=anterior2;
   	  anterior2=fibo;
   }
   printf("\n");
   
   system ("Pause"); 
   return 0;
   
}
