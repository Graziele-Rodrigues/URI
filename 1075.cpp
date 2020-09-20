#include <stdio.h>
int main()
{
    int N, A;
    scanf("%d", &N);
    for(A=2; A<=10000; A=A+N)
        printf ("%d\n",A);
    return 0;
}