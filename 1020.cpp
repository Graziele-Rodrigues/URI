+#include <stdio.h> 
int main(){   
int dias,a,m,d;     
scanf("%d",&dias);      
a = dias/365;    
m=(dias % 365)/ 30;    
d=(dias % 365)% 30;
printf("%d ano(s)\n",a);  
printf("%d mes(es)\n",m); 
printf("%d dia(s)\n",d);
}