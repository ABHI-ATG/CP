// Jai Shree Ram
/* -----------------------------------------------------power------------------------------------------------------------------------------- */


// ll power(ll b, ll p)
// {
//     ll ans = 1,res = b;
//     while(p){
//         if(p&1)ans=(ans*res)%INDIA;
//         res=(res*res)%INDIA;
//         p=(p>>1);
//     }
//     return ans;
// }

/* ---------------------------------------------------------modulo------------------------------------------------------------------------ */

// ll add(ll a, ll b)
// {
//     return (((a % INDIA) + (b % INDIA)) % INDIA);
// }
// ll sub(ll a, ll b)
// {
//     ll ans = ((((a % INDIA) - (b % INDIA)) % INDIA) + INDIA) % INDIA;
//     return ans;
// }
// ll mult(ll a, ll b)
// {
//     return (((a % INDIA) * (b % INDIA)) % INDIA);
// }
// ll div(ll a, ll b)
// {
//     return (((a % INDIA) * power((b % INDIA), INDIA - 2)) % INDIA);
// }


/* -----------------------------------------------------storing prime numbers----------------------------------------------------------------------------- */

//

// const int N = 100005;
// int m;
// vector<int> v(N, 1);
// int pr[N];
// void prime_store()
// {
//     for (int i = 2; i < N; i++)
//     {
//         if (v[i])
//         {
//             pr[m++] = i;
//             for (int j = 2 * i; j < N; j += i)
//             {
//                 v[j] = 0;
//             }
//         }
//     }
// }


/* --------------------------------------------------------calculating prime factors of a number-------------------------------------------------------- */


// vector<ll> div(ll a)
// {
//     vector<ll> tmp;
//     for (ll i = 2; i * i <= a; i++)
//     {
//         if (a % i == 0)
//         {
//             while (a % i == 0)
//             {
//                 tmp.push_back(i);
//                 a /= i;
//             }
//         }
//     }
//     if (a >= 2)
//     {
//         tmp.push_back(a);
//     }
//     return tmp;
// }

/* ------------------------------------------------factorial O(n)------------------------------------------------------------------------------------ */


// ll fact(ll a)
// {
//     ll res = 1;
//     for (ll i = 2; i <= a; i++)
//     {
//         res = (res * i) % INDIA;
//     }
//     return res;
// }


/* -----------------------------------------------------factorial precalculate and inverse ----------------------------------------------------------------- */


// ll N = 300005;
// vector<ll> fact(N, 0), i_fact(N, 0);
// void prefact(){
//     fact[0] = 1;
//     for (ll i = 1; i < N - 1; i++){
//         fact[i] = (fact[i - 1] * i) % INDIA;
//     }
//     i_fact[N - 2] = power(fact[N - 2], INDIA - 2);
//     for (ll i = N - 2; i >= 1; i--){
//         i_fact[i - 1] = (i_fact[i] * i) % INDIA;
//     }
// }

/* ---------------------------------------------------------seive --------------------------------------------------------------------------- */


// ll N=2000005;
// vector<ll> seive(N,0);
// void sevie(){
//     seive[1]=1;
//     for(ll i=2;i*i<N;i++){
//         if(seive[i]==0){
//             for(ll j=i*i;j<N;j+=i){
//                 seive[j]=1;
//             }
//         }
//     }
// }

/* ---------------------------------------------------------ncr--------------------------------------------------------------------------- */


// ll ncr(ll a, ll b){
//     if (b < 0 || b > a){return 0;}
//     return (fact[a] * ((i_fact[a - b] * i_fact[b]) % INDIA)) % INDIA;
// }

/* ---------------------------------------------------prime factor nlogn(n)--------------------------------------------------------------------------------- */


// int n = 100005;
// vector<int> fac(n + 1, 0);

// void pre()
// {
//     fac[1] = 1;
//     f(i, 2, n - 1)
//     {
//         if (fac[i] == 0)
//         {
//             fac[i] = i;
//             for (int j = i * i; j < n - 1; j += i)
//             {
//                 if (fac[j] == 0)
//                 {
//                     fac[j] = i;
//                 }
//             }
//         }
//     }
// }


// vector<int> factor(int a)
// {
//     vector<int> tmp={1};

//     while (1 != a)
//     {
//         tmp.push_back(fac[a]);
//         a /= fac[a];
//     }

//     return tmp;
// }

/* ------------------------------------------------------------------------------------------------------------------------------------ */


/*

for (int x = 1; x < N; x++)
		for (int y = x; y < N; y += x)
			d[y].push_back(x);
 


*/
// 
/* ------------------------------------------------------------------------------------------------------------------------------------ */

// vector<int> div(int n){
// 	vector<int> v;
//     for(int i=1;i*i<=n;i++){
//         if(n%i==0){
// 			v.push_back(i);
// 			if(n/i!=i)v.push_back(n/i);
//         }
//     }
// 	return v;
// }
