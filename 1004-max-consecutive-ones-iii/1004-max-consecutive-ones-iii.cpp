class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=0;
        int zero=0;
        int maxlen=0;
        while(right<n){
            if(nums[right]==0) zero++;
            if(zero>k){
                if(nums[left]==0){
                    zero--;
                } 
                left++;
            }
            if(zero<=k){
                int len=right-left+1;
                maxlen=max(len,maxlen);
            }
            right++;
        }
        return maxlen;
    }
};