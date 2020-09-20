#include <stdio.h>
#include <stdlib.h>
int main (){
	int N[10];
	int i;
	scanf("%d", &N[0]);  //o primeiro valor lido vai colocar na 1 posiçã do vetor
	for(i=1; i<10; i++){
		N[i]= N[i-1]*2; // faz se i-1 porque por exemplo vai 3 vai descontar 1 vira 2, vezes dois da 4 que é o dobtro do anterior que seria 2..
	}
	for(i=0; i<10;i++){
		printf("N[%d] = %d\n", i, N[i]);
	}
	system("pause");
	
}