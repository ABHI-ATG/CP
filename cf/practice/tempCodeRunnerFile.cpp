#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */
#define ll long long
#define mod 1000000007


int main(){

    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t=1;
    cin >> t;
    while(t--){
        ll n,k;cin >> n >> k;
        k--;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)cin >> v[i];

        vector<ll> a;
        auto get=[&](vector<pair<ll,ll>> &arr){
            vector<ll> aa;
            ll sz=a.size();
            for(ll i=0;i<sz;i++){
                if(aa.size()){
                    if((aa.back()<0 && a[i]<0)||(aa.back()>0 && a[i]>0))aa.back()+=a[i];
                    else aa.push_back(a[i]);
                }else aa.push_back(a[i]);
            }
            sz=aa.size();
            ll sum=0,mn=0;
            for(ll i=sz-1;i>=0;i--){
                sum+=aa[i];
                mn=min(mn,sum);
                if(sum>=0){
                    arr.push_back({sum,mn});
                }
            }   
            arr.push_back({sum,mn});
        };

        vector<pair<ll,ll>> x,y;
        for(ll i=0;i<k;i++){
            a.push_back(v[i]);
        }
        get(x);
        a.clear();
        for(ll i=k+1;i<n;i++){
            a.push_back(v[i]);
        }
        reverse(a.begin(),a.end());
        get(y);

        // for(auto it:x){
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }
        // cout<<endl;
        // for(auto it:y){
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }
        // cout<<endl;

        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());

        ll cur=v[k];
        while(x.size() && y.size()){
            if(abs(x.back().second)<=cur){
                cur+=x.back().first;
                x.pop_back();
            }else if(abs(y.back().second)<=cur){
                cur+=y.back().first;
                y.pop_back();
            }else break;
        }

        if(x.empty() || y.empty())cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}