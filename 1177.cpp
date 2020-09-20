#include <stdio.h>
#include <stdlib.h>
int main (){
	int N[1000];
	int T,i;
	scanf("%d", &T);
	for(i=0; i<1000; i++){
		N[i]= i%T;
		}
	for(i=0; i<1000; i++){
		printf("N[%d] = %d\n", i, N[i]);
	}
	system("pause");
}