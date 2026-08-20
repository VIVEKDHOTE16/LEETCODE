class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int number=n;
        for(int i=0;i<n;i++){
            number^=i^nums[i];
        }
        return number;
        
    }
};