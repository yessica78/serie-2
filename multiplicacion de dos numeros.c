/*programa: Multiplicación de dos numeros*/
#include <conio.h>
#include <stdio.h>

int main()
{
	int numero1, numero2;
	do
	{
		
	   printf("\n Introduzca el primer numero entero:");
	   scanf("%d",&numero1);
	
	   printf("\n Introduzca el primer numero entero:");
	      scanf("%d",&numero2);
	      
	   printf("\n\n  la multiplicación es :%d", numero1*numero2);
    }
    while(numero1,numero2>150);
	
	getch(); /*Pausa*/
 
    return 0;
}
