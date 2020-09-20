#include <bits/stdc++.h>
using namespace std;
int main () {
	vector<int> v, par, impar;
	int N, a;
	cin>>N;
	for(int i=0; i<N; i++){
		cin>>a;
        v.push_back(a);
        if(v[i]%2 == 0) par.push_back(v[i]);
        else impar.push_back(v[i]);
 	}
       sort(par.begin(), par.end());
        sort(impar.begin(), impar.end());
        reverse(impar.begin(), impar.end());
	for(int i=0; i<par.size(); i++){
        cout<<par[i]<<endl;
	}
	for(int i=0; i<impar.size(); i++){
        cout<<impar[i]<<endl;
	}
		
	
	return 0;
}