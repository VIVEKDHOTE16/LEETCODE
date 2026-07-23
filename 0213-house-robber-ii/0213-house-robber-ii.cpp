class Solution {
    int maxnonadjacentsum(vector<int>& numss) {
        int n = numss.size();
        int prev2=0;
        int prev=numss[0];
        for (int i=1;i<n;i++){
            int take=numss[i];
            if(i>1) take+=prev2;
            int nontake=0+prev;
            int curr=max(take,nontake);
            prev2=prev;
            prev=curr;
        }
        return prev;; 
    }
public:
    int rob(vector<int>& nums) {
        vector<int>temp1,temp2;
        int n=nums.size();
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            if(i != 0) temp1.push_back(nums[i]);
            if(i != n-1) temp2.push_back(nums[i]);
        }
        return max(maxnonadjacentsum(temp1),maxnonadjacentsum(temp2));
    }
};