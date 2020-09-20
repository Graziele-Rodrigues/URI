#include <bits/stdc++.h>
using namespace std;
int main (){
	map<string, double> mp;
	
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int m, p;
		cin>>m;
		string nome;
		double preco;
		while(m--){  //funcniona como for, sendo até que chegue ate 0
			cin>>nome>>preco;
             mp[nome] =  preco;  //crio a posicao com o nome e guardo o seu preco
         }
         cin >> p;
         double custo=0;
         int qt;
         while(p--){
			 cin>>nome>>qt;
			 custo += qt * mp[nome];  //multiplicar a quantidade pelo valor salvo em cada chave
		 }
		 cout<< fixed<<setprecision(2) << "R$ " << custo <<endl;
	}
}