#include <stdio.h>

int main()
{
int X, Y, temp, sum = 0;

scanf("%d %d", &X, &Y);

if (Y < X){
temp = X;
X = Y;
Y = temp;
}
if (X %2 == 0)
X++;
else
X+=2;

while(X < Y)
{
sum = sum + X;
X+=2;
}
printf("%d\n", sum);

return 0;
}