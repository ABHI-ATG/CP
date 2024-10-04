vector<int> calc_lps(string &pat){
    int n = pat.size();
    vector<int> lps(n, 0);
    lps[0] = 0;
    int i = 1;
    int cnt = 0;
    while (i < n)
    {
        if (pat[i] == pat[cnt])lps[i++]=++cnt;
        else{
            if (!cnt)lps[i++]=0;
            else cnt=lps[cnt-1];
        }
    }
    return lps;
}
vector<int> kmp(string &text, string &pat){
    vector<int> lps = calc_lps(pat);
    int i = 0;
    int cnt = 0;
    vector<int> ans(text.size() + 1, 0);
    while (i < text.size()){
        if (text[i] == pat[cnt]){
            i++;
            cnt++;
            if (cnt == pat.size()){
                ans[i - cnt + 1] = 1;
                cnt = lps[cnt - 1];
            }
        }else{
            if (cnt != 0){
                cnt = lps[cnt - 1];
            }else{
                i++;
            }
        }
    }
    return ans;
}