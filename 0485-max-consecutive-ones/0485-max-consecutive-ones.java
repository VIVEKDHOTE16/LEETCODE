class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int n=nums.length;
        int l=0;
        int r=0;
        int maxi=0;
        while(r<n){
            int count=0;
            if(nums[r]==1){
                r++;
                count=r-l;
                maxi=Math.max(maxi,count);
            }
            else if(nums[r]!=1){
                r++;
                l=r;
                count=0;
            }
        }
        return maxi;
    }
}