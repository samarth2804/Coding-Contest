# Water Bottles II (Leetcode 3100) #
# Problem Link: https://leetcode.com/problems/water-bottles-ii/description/

int maxBottlesDrunk(int b, int e) {
    int ans=0;
    while(b>=e){
        ans+=e;
        b-=e;
        b++;
        e++;
    }
    
    ans+=b;
    return ans;
}