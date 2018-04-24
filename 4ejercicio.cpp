#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int A,B,C;
    printf("Ingresa un numero:\n");
    scanf("%d",&A);
    printf("Ingresa otro numero:\n");
    scanf("%d",&B);
    printf("Ingresa un numero:\n");
    scanf("%d",&C);
    if(A > B && A > C){
    printf("El numero mayor es %d \n",A);
    }else{
        if(B > A && B > C){
        printf("El numero mayor es %d \n",B);
        }else{
        printf("El numero mayor es %d \n",C);
        }
    }
   return 0;
}
