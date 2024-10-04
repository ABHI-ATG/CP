// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

// Atg
#define f(i, _, __) for (int i = _; i < __; i++)
#define f2(i, __, _) for (int i = __; i >= _; i--)
#define inf 1000000000000000005
#define india 1000000007
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
#define all(v) v.begin(), v.end()
#define mod2 499122177


#define INDIA 1000000007
#define ll long long

ll power(ll b, ll p)
{
    ll ans = 1,res = b;
    while(p){
        if(p&1)ans=(ans*res)%INDIA;
        res=(res*res)%INDIA;
        p=(p>>1);
    }
    return ans;
}

ll N = 300005;
vector<ll> fact(N, 0), i_fact(N, 0);
void prefact(){
    fact[0] = 1;
    for (ll i = 1; i < N - 1; i++){
        fact[i] = (fact[i - 1] * i) % INDIA;
    }
    i_fact[N - 2] = power(fact[N - 2], INDIA - 2);
    for (ll i = N - 2; i >= 1; i--){
        i_fact[i - 1] = (i_fact[i] * i) % INDIA;
    }
}
ll ncr(ll a, ll b){
    if (b < 0 || b > a){return 0;}
    return (fact[a] * ((i_fact[a - b] * i_fact[b]) % INDIA)) % INDIA;
}


int a,b,c;
int flag;
int cnt=1;

void dfs(vector<vector<int>> &g, int s, vector<int> &vis){
    vis[s] = 1;
    if(s==b)cnt++;
    for (auto it : g[s]){
        if(vis[it])continue;
        if(it==c){
            if(cnt>=2)flag=1;
            continue;
        }
        dfs(g, it, vis);
    }
}

void atg()
{
    int n,m;cin >>n >> m;
    cin >> a >> b >> c;
    vector<vector<int>> g(n+1);
    f(i,0,m){
        int u,v;cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    vector<int> vis(n+1);
    vector<int> q;
    q.push_back(b);
    vis[b] = 1;
    int fa=0,fb=0;
    for (int i = 0; i < q.size(); i++){
        for (auto it : g[q[i]]){
            if(it==a)fa=1;
            else if(it==c)fb=1;
            else if (!vis[it]){
                q.push_back(it);
                vis[it]=1;
            }
        }
    }

    cout<<(fa&&fb?"YES":"NO");
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