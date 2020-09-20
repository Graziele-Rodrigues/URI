#include <bits/stdc++.h>
using namespace std;
int main (void) {
	int A, B, C;

 while(cin >> A >> B >> C)  //enquanto tiver entradas para ler
 {
  if(A == B && B == C){
   cout << "*" << endl;
  }
  if(A != B && A != C && B == C){
   cout << "A" << endl;
  }
  if(B != A && B != C && A == C){
   cout << "B" << endl;
  }
  if(C != B && C != A && A == B){
   cout << "C" << endl;
  }
 }
 return 0;
}