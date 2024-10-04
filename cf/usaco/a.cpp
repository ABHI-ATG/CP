// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;


// unknown_minds
#define inf 1000000000000000005
#define MOD 1000000007
#define mod 998244353
#define ll long long
#define all(v) v.begin(), v.end()

struct node{
    ll val;
    node(){
        val=0;
    }
};

class stree{
    vector<node> v;
    vector<ll> t;
public:
    stree(ll n){
        v=vector<node> (4*n+1);
        t.resize(4 * n + 1);
    }
    node oper(node a,node b){
        node c;
        c.val=max(a.val,b.val);
        return c;
    }
    void push(ll ind){
        if(t[ind]){

            v[ind*2+1].val=max(v[ind*2+1].val,t[ind]);
            v[ind*2+2].val=max(v[ind*2+2].val,t[ind]);
            t[ind*2+1]=max(t[ind*2+1],t[ind]);
            t[ind*2+2]=max(t[ind*2+2],t[ind]);
            t[ind]=0;
        }
    }
    int getvalue(int low, int high, int l, int r, int ind){
        if ((l > high) || (r < low)){
            return 0;
        }
        if ((l <= low) && (r >= high)){
            return v[ind].val;
        }
        push(ind);
        return max(getvalue(low,low+high>>1,l,r,ind*2+1), getvalue(1+(low+high>>1),high,l,r,ind*2+2));
    }
    void update(ll low, ll high, ll i, ll val, ll ind){
        if (low == high){
            // 
            v[ind].val=val;
            return;
        }
        ll mid = (low + high) / 2;
        if (mid >= i)
            update(low, mid, i, val, ind * 2 + 1);
        else
            update(mid + 1, high, i, val, ind * 2 + 2);

        v[ind] = oper(v[2 * ind + 1] , v[ind * 2 + 2]);
    }
    void update(ll low, ll high, ll l,ll r, ll val, ll ind){
        if ((l > high) || (r < low)){
            return;
        }
        if ((l <= low) && (r >= high)){
            // 
            v[ind].val=max(v[ind].val,val);
            t[ind]=max(t[ind],val);
            return;
        }
        push(ind);
        update(low,low+high>>1,l,r,val,ind*2+1);
        update(1+(low+high>>1),high,l,r,val,ind*2+2);
        v[ind]=oper(v[ind*2+1],v[ind*2+2]);
    }
};

void unknown_minds()
{
    int n;cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin >> v[i];

    stree a(n),b(n);
    vector<pair<int,int>> p;
    int ans=0;

    for(int i=0;i<n;i++){
        v[i]--;
        int val=max(a.getvalue(0,n-1,v[i],v[i],0),b.getvalue(0,n-1,v[i],v[i],0))+1;
        if(i)val=max(val,2);
        a.update(0,n-1,v[i],n-1,val,0);
        while(p.size() && p.back().first<=v[i]){
            b.update(0,n-1,p.back().first,n-1,p.back().second,0);
            p.pop_back();
        }
        p.push_back({v[i],val+1});
        ans=max(ans,val);
    }
    cout<<ans<<"\n";
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n = 1;
    cin >> n;
    while (n--)
    {
    unknown_minds();
    }
}