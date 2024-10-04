#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */
#define ll long long

struct node{
    ll val;
};
 
class stree{
    vector<node> v;
public:
    stree(ll n){v.resize(4 * n + 1);}
    node comp(node a,node b){
        node c;
        c.val=max(a.val,b.val);
        return c;
    }
    node getvalue(ll low, ll high, ll l, ll r, ll ind){
        if ((l > high) || (r < low)){
            return {(ll)0};
        }
        if ((l <= low) && (r >= high)){
            return v[ind];
        }       
        node a=getvalue(low,low+high>>1,l,r,ind*2+1);
        node b=getvalue(1+(low+high>>1),high,l,r,ind*2+2);
        return comp(a,b);
    }
    void update(ll low, ll high, ll i, ll val, ll ind){
        if (low == high){
            v[ind].val=val;
            return;
        }
        ll mid = (low + high) / 2;
        if (mid >= i)
            update(low, mid, i, val, ind * 2 + 1);
        else
            update(mid + 1, high, i, val, ind * 2 + 2);
       
        v[ind]=comp(v[ind*2+1],v[ind*2+2]);
    }
};


int main(){


    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t=1;
    cin >> t;
    while(t--){

        ll n;cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)cin >> v[i];

        stree a(n);
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            ll fr=1;
            if(mp[v[i]]){
                ll sub=0;
                if(mp[v[i]]<i){
                    sub=a.getvalue(0,n-1,mp[v[i]],i-1,0).val;
                }
                fr=max(fr,a.getvalue(0,n-1,mp[v[i]]-1,mp[v[i]]-1,0).val-sub+1);
            }
            a.update(0,n-1,i,fr,0);
            mp[v[i]]=i+1;
        }
        ll val=a.getvalue(0,n-1,0,n-1,0).val;
        cout<<((val&1)?"Alice":"Bob")<<"\n";


    }


    return 0;
}