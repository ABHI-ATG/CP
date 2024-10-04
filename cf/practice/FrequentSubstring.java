
public class FrequentSubstring {
    int calcLPS(String pat) {
        int n = pat.length();
        int[] lps = new int[n];
        lps[0] = 0;
        int i = 1;
        int cnt = 0;
        while (i < n) {
            if (pat.charAt(i) == pat.charAt(cnt)) {
                lps[i++] = ++cnt;
            } else {
                if (cnt != 0) {
                    cnt = lps[cnt - 1];
                } else {
                    lps[i++] = 0;
                }
            }
        }
        return lps[n - 1];
    }

    int maximize(String needle, int H) {
        int val = calcLPS(needle);
        int ans = 0;
        int sz = needle.length();
        if (sz <= H) {
            ans = 1;
            H -= sz;
            sz-= val;
            ans += H / sz;
        }
        return ans;
    }
}
