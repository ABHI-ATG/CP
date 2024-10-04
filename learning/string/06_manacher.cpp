string manacher(string s){
    int n=s.size();
    string ans="";
    string t="#";
    for(auto it:s){
        t+=it;
        t+='#';
    }
    int m=t.size();
    int i=1;
    int cnt=1;
    vector<int> dp(m);
    while(i<m){
        if(i-cnt>=0 && i+cnt<m&& t[i-cnt]==t[i+cnt]){
            cnt++;
        }else{
            dp[i]=cnt-1;
            int ind=i+cnt-1;
            for(int j=i-1;j>i-cnt;j--){
                if(j-dp[j]==i-cnt+1){
                    dp[i+i-j]=dp[j];
                    ind=i+(i-j);
                    break;
                }
                dp[i+i-j]=min(dp[j],j-(i-cnt+1));
            }
            i=max(ind,i+1);
            cnt=dp[i]+1;
        }
    }
    int mx=0;
    for(int i=0;i<m;i++){
        mx=max(mx,dp[i]);
    }
    for(int i=0;i<m;i++){
        if(mx==dp[i]){
            for(int j=i-dp[i];j<=i+dp[i];j++){
                if(t[j]!='#')ans+=t[j];
            }
            break;
        }
    }

    return ans;
}