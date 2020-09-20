#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main () {
	float a, b , c ,d, distancia;
	cin>>a>>b>>c>>d;
	distancia=sqrt( (c-a) * (c-a) + (d-b) * (d-b));
	cout<<fixed << setprecision(4) << distancia<<endl;
}