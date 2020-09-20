#include <bits/stdc++.h>
using namespace std;
int main (void){
	int F, X, K;
        cin>> X;
		for(int i=0; i<X; i++){
		cin>> K;
		for(int i=0; i<K; i++){
			cin>> F;
			if(F==1){
			 cout<< "Rolien"<< endl;	
			}
			else if(F==2){
			 cout<< "Naej"<< endl;	
			}
			else if(F==3){
              cout<< "Elehcim"<< endl;	 
			}
			else{
              cout<< "Odranoel"<< endl;
			}
		}
	  }
	return 0;
}