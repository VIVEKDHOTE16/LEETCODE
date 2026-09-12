class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto i : nums){
            if(mpp[i]==1 && i%2==0){
                return i;
            }
        }
        return -1;

        
    }
};