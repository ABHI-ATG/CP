#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */
#define ll long long

const int N=100500;
int dp[4][N];

int main(){


    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    freopen("input.txt", "r", stdin);
    // freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int t=1;
    // cin >> t;
    while(t--){
        int n,q;cin>> n >> q;
        for(int i=1;i<=n;i++){
            int x;cin >> x;
            dp[x][i]++;
            for(int j=0;j<3;j++)dp[j+1][i]+=dp[j+1][i-1];
        }
        while(q--){
            int l,r;cin >> l >> r;
            for(int j=0;j<3;j++){
                cout<<dp[j+1][r]-dp[j+1][l-1]<<"\n "[j==2];                
            }
        }

    }


    return 0;
}