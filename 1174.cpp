#include <stdio.h>
#include <stdlib.h>
int main (){
float A[100];
int i;
for(i=0; i<=99; i++){
scanf("%f", &A[i]);
}
for (i=0; i<=99; i++){
if (A[i]<=10.0)
printf("A[%d] = %.1f\n", i, A[i]);  //%d porque é da variavel i 
}
system("pause");
}
