#include <bits/stdc++.h>
using namespace std;

int main()
{
 int A, B;
 cin>> A>> B;
 if(A==B){
	 cout<<A<< endl;
 }
 if(A!=B && A>B){
 	cout<<A<<endl;
 }
 if(A!=B && A<B){
 	cout<< B<<endl;
 }
 return 0;
}