#include<bits/stdc++.h>
using namespace std;
/* Abhi-Atg */
#define ll long long
#define mod 1000000007

kmpvector<int> calc_lps(string &pat)
{
    int n = pat.size();
    vector<int> lps(n, 0);
    lps[0] = 0;
    int i = 1;
    int cnt = 0;
    while (i < n)
    {
        if (pat[i] == pat[cnt])
        {
            lps[i++] = ++cnt;
        }
        else
        {
            if (cnt != 0)
            {
                cnt = lps[cnt - 1];
            }
            else
            {
                lps[i++] = 0;
            }
        }
    }
    for (auto it : lps)
    {
        cout << it << " ";
    }
    cout << endl;
    return lps;
}

vector<int> kmp(string &text, string &pat)
{
    vector<int> lps = calc_lps(pat);

    int i = 0;
    int cnt = 0;
    vector<int> ans(text.size() + 1, 0);
    while (i < text.size())
    {
        if (text[i] == pat[cnt])
        {
            i++;
            cnt++;
            if (cnt == pat.size())
            {
                ans[i - cnt + 1] = 1;
                cnt = lps[cnt - 1];
            }
        }
        else
        {
            if (cnt != 0)
            {
                cnt = lps[cnt - 1];
            }
            else
            {
                i++;
            }
        }
    }
    return ans;
}


int main(){

  ios_base::sync_with_stdio(false);cin.tie(nullptr);
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  ll t=1;
  cin >> t;
  while(t--){
    cout<<"Hello World\n";

  }

  return 0;
}