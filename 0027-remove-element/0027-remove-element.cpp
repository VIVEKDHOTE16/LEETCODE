class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            if(nums[r]==val){
                r--;
            }
            else if(nums[l]==val){
                int temp=nums[l];
                nums[l]=nums[r];
                nums[r]=temp;
                l++;
                r--;
            }
            else{
                l++;
            }

        }
        return l;
        
    }
};