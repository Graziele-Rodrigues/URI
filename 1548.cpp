#include <bits/stdc++.h>

using namespace std;

int main (){
	vector<int> v;
	vector<int> v1;
     int N;
     int a, cont=0;
     cin>>N;
     for(int i=0; i<N; i++){
		 int M;
		 cin>>M;
		 for(int j=0; j<M; j++){
		 	cin>>a;
		 	v.push_back(a);	
		 	v1=v;
			 
		 }
		 sort(v.begin(), v.end());
		 reverse(v.begin(), v.end());
		 for(int j=0; j<v.size(); j++){
		   //cout<<v[j]<<endl;
		   if(v[j] == v1[j]){
			   cont ++;
		   }
		 }
             cout<<cont<<endl;
             cont = 0 ;   //zera dentro do for, pois senao ele vai rodar com o valor anterior
		 	 v.clear();
	         v1.clear();
		 
	 }
	 return 0;
}