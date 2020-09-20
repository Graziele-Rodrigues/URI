#include <bits/stdc++.h>
using namespace std;
int main (){
int n;
int a;
while(cin>>n){
	string v[1005];
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	sort(v, v+n);
	for(int i=0; i<n; i++){
		cout<<v[i]<<endl;
	}
}
return 0;
}