#include <stdio.h>
int main(){
    int X=0;
    scanf("%i", &X);
    (X%2==0) ? (X=X+1) : (X=X);
    printf("%i\n",X);
    printf("%i\n",X+2);
    printf("%i\n", X+4);
    printf("%i\n", X+6);
    printf("%i\n", X+8);
    printf("%i\n", X+10);
}