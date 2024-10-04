#include <bits/stdc++.h>
using namespace std;
#define f(i, _, __) for (ll i = _; i < __; i++)
#define f2(i, __, _) for (ll i = __; i >= _; i--)
#define inf 1000000000000000005
#define india 1000000007
#define INDIA 998244353
#define Welcome ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define array ll n;cin >> n;vector<ll> arr(n);for (auto &it : arr){cin >> it;}
#define out(_) for (auto &it :_){cout << it << " " ;}cout<<endl;
#define str string s;cin >> s;
#define pb push_back
#define vi vector<ll>
#define dbg cout << "Bharat\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define minus cout << "-1\n";
#define endl "\n"
#define ll long long
#define all(v) v.begin(), v.end()
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
// #define fr                first
// #define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcntt
#define ppcll             __builtin_popcnttll
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
#define mp make_pair
// #define f first
// #define s second
#define lb lower_bound
#define ub upper_bound
#define ins insert
const char nl = '\n';
 

/*----------------------------------------------------------------------------------*/       
 
// int n,m;
// int a,b,c,d;
// int x,y;
// int k; 
int N=5;
int n,k;
string s;
// string a,b;
// string s,t;

// vector<int> a,b;
// vector<string> s,t;
vector<int> arr;

// vector<vector<int>> arr;

// vector<pair<int,int>> p;
/*----------------------------------------------------------------------------------*/        



/*----------------------------------------------------------------------------------*/        



// vector<vector<int>> atgv2(){

// }

// vector<vector<int>> oppv2(){

// }

// vector<vector<pair<int,int>>> atgp(){

// }

// vector<vector<pair<int,int>>> oppp(){
// }

/*----------------------------------------------------------------------------------*/

int _num(int x=1,int l=0){
    int ten=1;
    while(x--){
        ten*=10;
    }

    return (rand()*rand())%ten+l;
}

string _str(int n=10){
    string s;
    for(int i=0;i<n;i++){
        s.push_back(_num()%26+'a');
    }
    return s;
}
string _strb(int n=10){
    string s;
    for(int i=0;i<n;i++){
        s.push_back(_num()%2+'0');
    }
    return s;
}
vector<int> _vec(int n=10,int x=1,int l=0){
    vector<int> tmp(n);
    for(int i=0;i<n;i++){
        tmp[i]=_num(x,l);
    }
    return tmp;
}
vector<int> _inc(int n=10,int x=1,int l=0){
    vector<int> tmp(n);
    for(int i=0;i<n;i++){
        tmp[i]=i+1;
    }
    return tmp;
}
vector<int> _dec(int n=10,int x=1,int l=0){
    vector<int> tmp(n);
    for(int i=n;i>0;i--){
        tmp[n-i]=i;
    }
    return tmp;
}
vector<int> _vecdistinct(int n=10,int x=1,int l=0){
    vector<int> tmp(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        while(1){
            int y=_num(x,l);
            if(mp[y])continue;
            tmp[i]=y;
            mp[y]++;
            break;
        }
    }
    return tmp;
}
vector<string> _vecsb(int n=10){
    vector<string> tmp(n);
    for(int i=0;i<n;i++){
        tmp[i]=_strb();
    }
    return tmp;
}
vector<string> _vecsc(int n=10){
    vector<string> tmp(n);
    for(int i=0;i<n;i++){
        tmp[i]=_str();
    }
    return tmp;
}
vector<vector<int>> _vec2(int n=10,int m=10,int x=1,int l=0){
    vector<vector<int>> tmp(n);
    for(int i=0;i<n;i++){
        tmp[i]=_vec(m,x,l);
    }
    return tmp;
}

vector<pair<int,int>> _vecp(int n=10,int x=1,int l=0){
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        p.pb({_num(x,l),_num(x,l)});
    }
    return p;
}

/*----------------------------------------------------------------------------------*/        
int check(vector<int> a,vector<int> b){
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            return 1;
        }
    }
    return 0;
}

















/*----------------------------------------------------------------------------------*/        
int_fast32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1000;
    // cin >> n;
    
    srand(time(0));
    t=_num(1,1);
    t=10;
    cout<<t<<"\n";
    while (t--)
    {

/*----------------------------------------------------------------------------------*/        
        // m=_num(1,0);
        // a=_num(1,0);
        // b=_num(1,0);
        // c=_num(1,0);
        // d=_num(1,0);
        // x=_num(1,0);
        // y=_num(1,0);

        n=_num(5,1);
        cout<<n<<" ";
        int x=_num(3,1);
        cout<<x<<"\n";
        vector<int> a=_vec(n,3,1);
        for(auto it:a)cout<<it<<" ";
        cout<<"\n";
        // character
        // s=_str(n);
        // k=1;
        // f2(i,n/10,1){
        //     if(n%i==0){
        //         k=i;
        //         break;
        //     }
        // }
        // b=_str();
        // s=_str();
        // t=_str();
        // binary
        // a=_strb();
        // b=_strb();
        // s=_strb();
        // t=_strb();

        // b=_vec();

        // s=_vecs();
        // t=_vecs();
        // s=_vecsc();
        // t=_vecsc();

        // arr=_vec2();

        // p=_vecp();

/*----------------------------------------------------------------------------------*/        
        // arr=_vec(n,2,0);

        // int t2=opp();
        // int t1=atg();
        // int t1=1;
        // int t2=0;
        // vector<int> t1=atgv();
        // vector<int> t2=oppv();
        // string t2=opps();
        // string t1=atgs();
        // vector<vector<int>> t1=atgv2();
        // vector<vector<int>> t2=oppv2();
        // vector<vector<pair<int,int>>> t1=atgp();
        // vector<vector<pair<int,int>>> t2=oppp();
/*----------------------------------------------------------------------------------*/     

        // if(t1!=t2){
        //     cout<<n<<endl;
        //     out(arr);
        //     cout<<t1<<" "<<t2<<endl;
        //     break;
        // }

        // if(check(t1,t2)){
        //     out(t1);
        //     out(t2);
        //     break;
        // }

    }
    return 0;
}