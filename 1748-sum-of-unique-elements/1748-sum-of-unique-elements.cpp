class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto element : mpp){
            int number=element.first;
            int count= element.second;

            if(count==1){
                sum+=number;
            }
        }
        return sum;
    }
};