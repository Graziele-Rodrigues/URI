#include <stdio.h>

int main(){
    int X, Y, i;
    scanf("%d %d", &X, &Y);
    for (i = 1; i <= Y; i++){
        if (i % X == 0 || i == Y){
           printf("%d\n", i);
        }
        else{
           printf("%d ", i);
        }
    }

    return 0;
}