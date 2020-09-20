#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    string linguagem, traducao, name;
    cin.tie(0);
    ios_base::sync_with_stdio(false); 
	
	//Ativa ou desativa a sincronização de todos os fluxos padrão
	//com seus fluxos C padrão correspondentes, se for chamado antes que o programa execute sua 
	//primeira operação de entrada ou saídae se chamado depois que uma operação de entrada ou saída 
	//ocorrer, seus efeitos serão definidos pela implementação .
	
    while(cin >> N){
        cin.ignore();  //funçaõ que ignora o caracteres após atingir o que defini dentro dos parenteses
        map<string, string> m;
        while(N--){
            getline(cin, linguagem);
            getline(cin, traducao);
            m[linguagem] = traducao;
        }
        cin >> M;
        cin.ignore();
        while(M--){
            getline(cin, name);   //geline "pega" caracter
            getline(cin, linguagem);
            cout << name << endl << m[linguagem] << endl << endl;
        }
    }
    return 0;
}