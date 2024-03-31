# Harshad Number (Leetcode 3099) #
# Problem Link: https://leetcode.com/problems/harshad-number/description/

int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum=0;
    int y=x;
    while(x){
        sum+=(x%10);
        x=x/10;
    }
    
    if(y%sum==0){
        return sum;
    }
    
    return -1;
}