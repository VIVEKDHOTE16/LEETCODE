class Solution {
    void getallsubsets(vector<int>& nums,vector<int>& ans,vector<vector<int>>& result,int i){
        if(i==nums.size()){
            result.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getallsubsets(nums,ans,result,i+1);
        ans.pop_back();
        int ind=i+1;
        while(ind<nums.size() && nums[ind]==nums[ind-1]) ind++;

        getallsubsets(nums,ans,result,ind);
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> result;
        vector<int> ans;
        getallsubsets(nums,ans,result,0);

        return result; 
    }
};