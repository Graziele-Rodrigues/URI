#include <stdio.h>    //LEMBRAR QUE EM VETOR E MATRIZ 
                      //DEVE SEMPRE USAR FOR PARA CADA CONDIÇÃO!
#include <stdlib.h>
int main(void){
	int X[10];
	int i;
	for(i=0; i<10; i++){
		scanf("%d", &X[i]);
	}
	for(i=0; i<10; i++){
		if(X[i]<=0)
		X[i]=1;
	}
	   	for(i=0; i<10; i++){
		printf("X[%d] = %d\n", i, X[i]);
	}
	system("pause");
}
