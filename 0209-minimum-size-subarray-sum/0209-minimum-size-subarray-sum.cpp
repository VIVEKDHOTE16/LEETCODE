class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int len =INT_MAX;
        int mini=INT_MAX;
        while(r<n){
            sum+=nums[r];
            r++;
            while(sum>=target){
                len=r-l;
                mini=min(len,mini); 
                sum-=nums[l];
                l++;
            }
        }
        if(mini==INT_MAX){
            return 0;
        }
        return mini;
        
    }
};