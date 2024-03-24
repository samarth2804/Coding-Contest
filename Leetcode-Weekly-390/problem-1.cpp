# Maximum Length Substring With Two Occurrences(Leetcode 3090) #
# Problem Link: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/

int maximumLengthSubstring(string s) {
    int n=s.size();
    vector<int> freq(26,0);
    int i=0, ans=0;
    for(int j=0;j<n;++j){
        freq[s[j]-'a']++;
        while(freq[s[j]-'a'] > 2){
            freq[s[i]-'a']--;
            ++i;
        }
        ans=max(ans,j-i+1);
    }

    return ans;
}