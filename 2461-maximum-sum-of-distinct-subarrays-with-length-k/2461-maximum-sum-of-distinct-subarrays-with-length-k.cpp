class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        long long sum=0;
        long long maxsum=0;
        unordered_set<int>st;
        for(int r=0;r<n;r++){
            while(st.count(nums[r])){
                st.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
            st.insert(nums[r]);
            sum+=nums[r];

            if(r-l+1==k){
                maxsum=max(sum,maxsum);

                st.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
        }
        return maxsum;
    }
};