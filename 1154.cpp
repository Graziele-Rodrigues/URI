#include <stdio.h>
int main ()
{
 int A, N=0;
 float AVG, J = 0;
 while (1){
 	scanf ("%d", &A);
 	if (A < 0)
	break;
 	N+= A;
 	J++;
 }	
   AVG = N / J;
   printf ("%.2f\n", AVG);
return (0);	
	
}