#include <stdio.h>
#include <stdlib.h>
int main (){
	double N[100], X;
	int i;
	scanf("%lf", &X); //leia um valo x
	N[0]=X;           //coloque na primeira posição do vetor
	for(i=1; i<100; i++){        //leia do 1 ao 99
    N[i]= N[i-1]/2.0;  //divida por 2 o  1 valor lido e coloque nas outras posiçoes
	}                      
   for(i=0; i<100; i++){
   	printf("N[%d] = %.4lf\n", i, N[i]);
   }
   system("pause");
	
}