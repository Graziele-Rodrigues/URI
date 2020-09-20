#include <stdio.h>
#include <stdlib.h>
int main () {
	int N;
	scanf("%d", &N);
	int X[N];
	int i;
	int menor, po;
	scanf("%d", &X[0]);
	menor= X[0];
	po=0;
	for(i=1; i<N; i++){
		scanf("%d", &X[i]);
		if(X[i]<menor){
			menor= X[i];
			po=i;
		}
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", po);
	system("pause");
}