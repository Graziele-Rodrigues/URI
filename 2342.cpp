#include<bits/stdc++.h>
using namespace std;
int main() {
    int N,P,Q,S;
    char x;
    cin>>N;
    scanf("%d %c %d", &P, &x, &Q);
    if(x == '+'){
		S=P+Q;
		if(S<=N){
			cout<<"OK"<<endl;
		}
		else{
		   cout<<"OVERFLOW"<<endl;	
		}
	}
	else if(x == '*'){
	   		S=P*Q;
		if(S<=N){
			cout<<"OK"<<endl;
		}
		else{
		   cout<<"OVERFLOW"<<endl;	
		}
	}
	else{
		
	}
	return 0;
}