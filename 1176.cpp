#include <stdio.h>
#include <stdlib.h>
int main (){
	int T,i,N;
	unsigned long long int Fib[60]; //inteiro de 64 bits sem sinal
	Fib[0]=0; //eles dizem o valor do vetor 0 e 1 no problema.
	Fib[1]=1;
	for(i=2; i<=60; i++){  //ja achou valor de 2 vetores por isso começa em 2
	  Fib[i]= Fib[i-1]+Fib[i-2];	
	  }
	  scanf("%d", &T);  //ler numero de perguntas
	  for(i=1; i<=T; i++){  //repetir o numero de perguntas lidos
	  	scanf("%d", &N); 
	  	printf("Fib(%d) = %llu\n", N, Fib[N]); //para cada valor lido ele quer saber a posição
	  }
	    system("pause");
	}
	 