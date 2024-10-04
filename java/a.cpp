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