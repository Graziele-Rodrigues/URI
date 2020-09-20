#include <stdio.h>
int main () {
	double M[12][12];
	int i, j;
	double soma = 0.0;
	char op[5];
	scanf("%s", &op); // usa %s ao inves de %c pois quer ler 1 caracter
	for(i=0; i<12; i++)
	for(j=0; j<12; j++)
	   scanf("%lf", &M[i][j]);
	for(i=0; i<12; i++)
	for(j=i+1; j<12; j++)
	   soma += M[i][j];
	if(op[0] == 'M') soma = soma/66.00; //(144-12)/2 = 66
	printf("%.1lf\n", soma);
	
}