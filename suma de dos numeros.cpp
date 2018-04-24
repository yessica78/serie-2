#include <stdio.h>
#include <stdlib.h>

int main()
{
	int entero1;
	int entero2;
	int suma;
	printf("\n introduzca el primer numero entero:");
	scanf("%d",&entero1);
	
		printf("\n introduzca el segundo numero entero:");
	scanf("%d",&entero2);
	
	while(suma<200)
	{
	suma=entero1+entero2;
	printf("\n la suma es:%d",suma);
    }
	system("pause");
	
	return 0;
}
