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

int solve(int a,int b){
    return a*10000+b;
}

map<pair<int,int>,int> mp;
map<int,int> vis;

void atg()
{
    int n,m,e;cin >> n >> m >> e;
    
    while(e--){
        int a,b,c,d;cin >> a >> b >> c >> d;
        mp[{solve(a,b),solve(c,d)}]=1;
    }
    vector<int> tmp;
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(vis[solve(i,j)])continue;
            vector<pair<int,int>> q;
            q.push_back({i,j});
            vis[solve(i,j)]=1;
            for(int i=0;i<q.size();i++){
                int a=q[i].first;
                int b=q[i].second;
                if(a+1<n && mp[{solve(a+1,b),solve(a+1,b+1)}]==0 && vis[solve(a+1,b)]==0){
                    q.push_back({a+1,b});
                    vis[solve(a+1,b)]=1;
                }
                if(a-1>0 && mp[{solve(a,b),solve(a,b+1)}]==0 && vis[solve(a-1,b)]==0){
                    q.push_back({a-1,b});
                    vis[solve(a-1,b)]=1;
                }
                if(b+1<m && mp[{solve(a,b+1),solve(a+1,b+1)}]==0 && vis[solve(a,b+1)]==0){
                    q.push_back({a,b+1});
                    vis[solve(a,b+1)]=1;
                }
                if(b-1>0 && mp[{solve(a,b),solve(a+1,b)}]==0 && vis[solve(a,b-1)]==0){
                    q.push_back({a,b-1});
                    vis[solve(a,b-1)]=1;
                }
            }
            tmp.push_back((int)q.size());
        }
    }
    sort(all(tmp));
    int bob=0,alice=accumulate(all(tmp),0);
    for(int i=0;i<tmp.size();i+=2){
        bob+=tmp[i];
    }
    alice-=bob;
    if(alice==bob){
        cout<<"Draw";
    }else if(alice>bob){
        cout<<"Alice";
    }else cout<<"Bob";
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
    while (n--)
    {
        atg();
    }
}
// Atg