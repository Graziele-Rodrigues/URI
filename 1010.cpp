#include <stdio.h>
int main() {
int codigo1,codigo2,pecas1,pecas2;  
double valorU1, valorU2;    
scanf("%d",&codigo1); 
scanf("%d",&pecas1);     
scanf("%lf",&valorU1);    
scanf("%d",&codigo2);
scanf("%d",&pecas2);
scanf("%lf",&valorU2);
printf("VALOR A PAGAR: R$ %.2lf\n", (pecas1*valorU1 + pecas2*valorU2));
}