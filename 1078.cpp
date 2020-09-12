#include <stdio.h>

int main(){
int a,b,c;
scanf("%d", &a);
for(b=1;b<=10;b++){
c=a*b; 
printf("%d x %d = %d\n",b,a,c);
}
return 0;
}