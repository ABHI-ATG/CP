#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin >> t;
    while(t--){
        long long z;cin >> z;
        long long ans=0;
        if(z==1){
            cout<<-1<<"\n";
            continue;
        }
        while(z!=1){
            if(z%3==0){
                ans+=z/3;
                break;
            }else{
                ans++;
                z-=2;
            } 
        }
        cout<<ans<<"\n";
    }

    return 0;
}