#include <bits/stdc++.h>
using namespace std;
int main (void) {
int N, P, D, cont=0;
cin>> P;
if(P <= 10){
   cin>> N;
   int n[N];
   for(int i=0; i<N; i++){   //entrada
	   cin>>n[i];
   }
	   for(int i=1; i<N; i++){  //saida
        if(n[i]>n[i-1]){
         D= (n[i] - n[i-1]);
		}
        else{
         D=(n[i-1] - n[i]);
		}
        if(D<=P)
            cont++;
      }
      if(cont== N-1){
        cout<<"YOU WIN"<< endl;
        return 0;
	  }
    else{
        cout<<"GAME OVER"<<endl;
        return 0;
	}
   }

   else{
	exit(0);
}
return 0;
}
