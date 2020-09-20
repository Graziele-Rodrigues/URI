#include <bits/stdc++.h>
using namespace std;

int main() {
 int n, q, s, x;
 int pos = 0, pos_f, tmp, res = 10000000;
 
 cin >> n;

 for(int i = 0; i < n; ++i){
  cin >> q >> s;
  res = 10000000;
  pos_f = 0;
  pos= 0;
  
  for(int j = 0; j < q; ++j) {
   cin >> x;
   pos++;
   
   tmp = s - x;
   if(tmp < 0)
    tmp = -tmp;
    
   if(tmp < res){
    res = tmp;
    pos_f = pos;
   }   
  }
  
  cout << pos_f << endl;
  
 }
 
 return 0;
}