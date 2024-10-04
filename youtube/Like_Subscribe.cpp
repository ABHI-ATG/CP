// Jai Shree ram
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NUll);
#define mod 1000000007
#define ll long long
#define all(v) v.begin(), v.end()


int mex(vector<int> a) {
    sort(a.begin(), a.end());
    int mx=0;
    for (int i = 0; i < (int) a.size(); i++) {
        if(mx==a[i]){
            mx++;
        }
    }
    return mx;
}

int main()
{
#ifndef ONlINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int n=s.size();
        int ans=INT_MAX;
        for(char c='a';c<='z';c++){
            int mx=0;
            int cnt=0;
            for(int i=0;i<n;i++){
                if(s[i]==c){
                    cnt=0;
                }else{
                    cnt++;
                }
                mx=max(mx,cnt);
            }
            int oper=0;
            while(mx>0){
                oper++;
                mx/=2;
            }
            ans=min(ans,oper);
        }
        cout<<ans<<endl;
    }

}




/*








abacaba
1 - 2 4 6
aaaa

1


codeforces

c
1 - 2 4 6 9
    o e o e
cdfrcs
2 - 2 4 6
    d r s
cfc
3 - 2
    f
cc


codeforesc
1 
o e o e - cdfrsc
d r - cfsc
f - csc
s - cc
4

1 - 8 4
2 - 4 2
3 - 2 1
4 - 1 1


a --> z

a 
abbbbabba
4 - 4-2-1-0

aaa - x




baccabcbb

a
1 - b c b b 
acacb
2 - c c
aab
3 - b
aa

x=3

4 - bcbb
1 - cb
2 - c
3 - b


baccabcbb
b
4 - acca
x=3


c
baccabcbb

2-ab

1 - a
2 - b

2


ans=INT_MAX;
for(i: char a --> z)
    find the substring of max size which do not contain the
    character i
    mx
    int oper=0;
    while(mx>0){
        mx/=2;
        oper++;
    }
    min(oper,ans);

cout<<ans<<endl;


lets see code now;

*/




/*






Two element to be distinct if atleast for 1 ith bit 
one element is set and another is unset at that ith bit


2 4
2 - 010
4 - 100


a b c d e    y 
0 0 0 0 0    
















all ith bit is 0 or 1 : 

some ith bit is 0 and 1 : 
    if ith bit in y is 0
        x=y
    else 
        unset ith bit 
        set all bit from 0 to i-1



1 1 2

1- 0 1
1- 0 1
2- 1 0


         

4 5 2 3 5

4- 1 0 0
5- 1 0 1
2- 0 1 0
3- 0 1 1
5- 1 0 1
 
 

1 1 3

1 - 0 1 
1 - 0 1 
3 - 1 1



22 30 20 28 20

22 - 1 0 1 1 0
30 - 1 1 1 1 0 
20 - 1 0 1 0 0
28 - 1 1 1 0 0
20 - 1 0 1 0 0





lets see code now :)


*/