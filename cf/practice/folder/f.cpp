// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

// Atg
#define f(i, _, __) for (int i = _; i < __; i++)
#define f2(i, __, _) for (int i = __; i >= _; i--)
#define inf 1000000000000000005
#define india 1000000007
#define INDIA 998244353
#define Welcome ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define array int n;cin >> n;vector<ll> arr(n);for (auto &it : arr){cin >> it;}
#define out(_) for (auto &it :_){cout << it << " " ;}cout<<endl;
#define str string s;cin >> s;
#define pb push_back
#define vi vector<int>
#define dbg cout << "Bharat\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define minus cout << "-1\n";
#define endl "\n"
#define ll long long
#define all(v) v.begin(), v.end()
#define mod2 499122177





void atg()
{
    int n;cin >> n;
    vector<int> dis(n),len(n);
    multiset<int> st;
    int mn=LLONG_MAX;
    int mx=LLONG_MIN;
    f(i,0,n){
        cin >> dis[i];
        mn=min(mn,dis[i]);
        mx=max(mx,dis[i]);
    }
    f(i,0,n){
        cin >> len[i];
        st.insert(len[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
        }
    }

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Welcome;

    int n = 1;
    // cin >> n;
    int cnt=1;
    while (n--)
    {
        // cout<<"Case #"<<cnt++<<": ";
        atg();
    }
}
// Atg