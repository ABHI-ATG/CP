#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;cin >> n;
	vector<string> v;
	set<string> st;
	for(int i=0;i<n;i++){
		string s;cin >> s;
		v.push_back(s);
		st.insert(s);
	}

	
	sort(v.begin(),v.end(),[](string a,string b){
		if(a.size()>b.size())return true;
		return false;
	});

	int ans=0;
	for(int i=0;i<n;i++){
		if(st.find(v[i])==st.end())continue;
		ans++;
		for(int j=0;j<v[i].size();j++){
			string t;
			for(int k=j;k<v[i].size();k++){
				t+=v[i][k];
				if(st.find(t)!=st.end())st.erase(t);
			}
		}
	}
	cout<<ans;

}