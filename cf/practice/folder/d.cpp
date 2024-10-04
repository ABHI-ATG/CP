#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */


int main(){

    double n;cin >> n;
    n*=100000000;

    int a=n;
    int g=__gcd(a,100000000);
    a/=g;
    cout<<a;
    cout<<" "<<(100000000)/g<<endl;


    return 0;
}