#include<stdio.h>
main(){
	int n,ac,i;
	float t;
	ac=0;
	i=0;
	do{
		printf ("Dame numero a sumar\n");
        scanf("%d",&n);
        i++;
        ac=ac+n;
        printf("Suma %d \n", ac);
	} 
	while (ac<=200);
	t=ac/i;
	printf("Promedio %f \n",t);
	printf("Elementos %d \n",i);
	return 0;
}

