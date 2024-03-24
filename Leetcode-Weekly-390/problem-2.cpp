# Apply operation to make sum of array greater than or equal to k #
# Problem Link: https://leetcode.com/problems/apply-operations-to-make-sum-of-array-greater-than-or-equal-to-k/

int minOperations(int k) {
    int ans=k-1;
    for(int i=2;i<=k/2;++i){
        int temp=(i-1);
        temp+=(k/i);
        if(k%i==0){
            --temp;
        }
        ans=min(ans,temp);
    }
    return ans;
}