#include <stdio.h>
#include <stdlib.h>
int main (){
int N[20];
int x;
int temp;
for(x=0; x<20; x++){
	scanf("%d", &N[x]);
}
for(x=0; x<10; x++){   //É 10 PORQUE DEVE TROCAR ATE CHEGAR EM 10
  temp= N[x];
  N[x]= N[19-x];
  N[19-x]= temp;
}
for(x=0; x<20; x++){
	printf("N[%d] = %d\n", x, N[x]);
}
 system("pause");
}