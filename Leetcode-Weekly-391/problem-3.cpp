# Count Alternating Subarrays (Leetcode 3101) #
# Problem Link: https://leetcode.com/problems/count-alternating-subarrays/description/

long long countAlternatingSubarrays(vector<int>& nums) {
    long long n=nums.size(), ans=1, i=0, j=1;
    
    while(j<n){
        if(nums[j]==nums[j-1]){
            i=j;
        }
        
        ans+=(j-i+1);
        ++j;
    }
    
    return ans;
}