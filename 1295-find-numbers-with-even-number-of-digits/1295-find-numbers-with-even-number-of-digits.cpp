class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n= nums.size();

        int evencount=0;
        for(int i=0;i<n;i++){
            int current = nums[i];
            int count=0;


            while(current > 0){
                count++;
                current /=10;
            }
            if(count % 2==0){
                evencount++;
            }

        }
        return evencount;
    }
};