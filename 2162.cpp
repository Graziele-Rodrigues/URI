#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i, pico = 1;
    cin>>N;
    int v[N];
    for(i=0; i<N; i++)
        cin>>v[i];
    if(N==2 && v[0]==v[1]) pico= 0;
    else
    {
        for(i=2; i<N; i++)
        {
            if(v[i] >= v[i-1] && v[i-1] >= v[i-2])
            {
                pico= 0;
                break;
            }
            else if(v[i] <= v[i-1] && v[i-1] <= v[i-2])
            {
                pico = 0;
                break;
            }
        }
    }
    printf((pico==1)?"1\n":"0\n");
    return 0;
}