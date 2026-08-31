class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return maxcount(nums,k) - maxcount(nums,k-1);
    }

    int maxcount(vector<int>& nums,int k){
        int n=nums.size();
        int l=0;
        int r=0;
        int sum=0;
        int count=0;
        while(r<n){
            sum+=(nums[r]%2);
            while(sum>k){
                sum-=(nums[l]%2);
                l++;
            }
            count+=(r-l+1);
            r++;
        }
        return count;
        
    }
};