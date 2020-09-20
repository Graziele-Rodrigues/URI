#include <bits/stdc++.h>
using namespace std;
int main(){
 int a,b;
 while(cin>>a>>b && (a||b)){ 
  int c=0,d=0;
  set<int> A,B;
  for(int i=0;i<a;i++){
   int v;
   cin>>v;
   A.insert(v); //insere os elementos lidos
  }

  for(int i=0;i<b;i++){
   int v1;
   cin>>v1;
   B.insert(v1); //insere os elementos lidos
  }

  set<int>::iterator it;
  for(it=A.begin();it!=A.end();it++) {
  if (!B.count(*it))   //se a consluta do conteudo de B for diferente de A soma ao contador
   c++;
  }
  
  for(it=B.begin();it!=B.end();it++){
   if (!A.count(*it)) //se o conteudo de A for firefente de B soma ao contador
   d++;
  }
  cout<<min(c,d)<<endl;  //minimo entre c e d
 }
 return 0;
}