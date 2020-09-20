#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main () {
	double a, b , c , maior;
	cin>>a>>b>>c;
	maior=(a + b + abs(a - b)) / 2; 
	maior=(maior + c + abs(maior - c)) / 2;
	cout<<maior << " eh o maior"<< endl;
}