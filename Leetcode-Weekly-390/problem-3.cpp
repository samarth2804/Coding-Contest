# Most Frequent IDs (Leetcode 3092)#
# Problem Link: https://leetcode.com/problems/most-frequent-ids/

vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
    int n=nums.size();
    vector<long long> ans(n);
    unordered_map<int,long long> umap;
    multiset<long long> st;

    for(int i=0;i<n;++i){
        if(umap[nums[i]] > 0){
            st.erase(st.find(umap[nums[i]]));
        }
        umap[nums[i]]+=freq[i];
        if(umap[nums[i]] > 0){
            st.insert(umap[nums[i]]);
        }

        if(st.empty()){
            ans[i]=0;
        }
        else{
            ans[i]=(*st.rbegin());
        }
    }

    return ans;
}