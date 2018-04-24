#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,s,x;
	printf("\n Dame la cantidad de numeros que desea sumar:");
	scanf("%d",&n);
	s=0;
	for(i=1;i<=n;i++)
	{
		printf("numero a sumar");
		scanf("%d",&x);
		s=s+x;
	}
	printf("la suma es:%d",s);
	getch();
}
