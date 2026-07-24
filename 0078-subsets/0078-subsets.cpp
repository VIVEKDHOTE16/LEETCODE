class Solution {
    void printsubsets(vector<int>& nums,vector<int>& ans,vector<vector<int>>& result,int i){
        if(i==nums.size()){
            result.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        printsubsets(nums,ans,result,i+1);
        ans.pop_back();
        printsubsets(nums,ans,result,i+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        printsubsets(nums,ans,result,0);
        return result;
    }
};