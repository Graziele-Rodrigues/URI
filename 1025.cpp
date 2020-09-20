#include <bits/stdc++.h>
using namespace std;
int main (){
	int N, Q;
	int caso=1;
	cin>>N>>Q;
	while (!(N ==0 && Q==0)) { //enquanto os dois não forem zeros
		int v[N];
		for(int i=0; i<N; i++){
			cin>>v[i];
		}
		sort(v, v+N);
		int consulta;
		cout<< "CASE# " << caso << ":"<< endl;
		for(int i=0; i<Q; i++){  //numero de cobnsulta em determinado periodo do vetor
			cin>>consulta;
		    int baixo=0, alto=N-1;
		    int meio;
		    bool achei= false;
		    
		     while(!achei && alto>=baixo){   //busca chamada busca binaria
				 meio = (baixo+alto)/2;
				 if(v[meio] == consulta){
					 achei= true;
				 }
				 else if( v[meio] < consulta){
					 baixo = meio +1;
				 }
				 else {
					 alto = meio -1;
				 }
			 }
			 if(achei==false){
				 cout<< consulta << " not found" << endl;
			 }
			 else{
				 while(v[meio-1] == v[meio] && meio!=0) //confiro se a posição anterior é igual e assim vou voltando até encontrar  apeimria posição referente ao numero procurado, lembrando que se for 0 não se deve voltar para trás
				 	meio--;
				    cout<< consulta<< " found at "<< meio+1<<endl; 
			 }
		}
		caso++;
		cin>>N>>Q; //ler sempre os valores após terminar um while
	} 

	return 0;
}