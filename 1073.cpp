#include <stdio.h>
int main (){
    int N, I;
    scanf ("%d", &N);
    for (I= 2; I<=N; I++)
  {
      if (I%2==0)
    printf ("%d^2 = %d\n", I, I*I);
}
return (0);
}