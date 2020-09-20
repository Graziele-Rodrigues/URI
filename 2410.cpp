#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int N, v ;
     map < int ,int > st;
     cin>>N;
     while(N--){
     	cin>>v;
     	if(st.count(v) == 0)
     	    st[v]++;
     }
     cout<<st.size()<<endl;
    return 0;
}