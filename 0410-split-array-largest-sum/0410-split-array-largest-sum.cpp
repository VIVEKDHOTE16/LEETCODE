class Solution {
    int countsum(vector<int>& nums, int sum){
        int n=nums.size();
        int subarray=1;
        long long sumsubarray=0;
        for(int i=0;i<n;i++){
            if(sumsubarray+nums[i]<=sum){
                sumsubarray+=nums[i];
            }
            else{
                subarray+=1;
                sumsubarray=nums[i];
            }

        }
        return subarray;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        long long high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int subarray=countsum(nums,mid);
            if(subarray>k){
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
  
    }
};