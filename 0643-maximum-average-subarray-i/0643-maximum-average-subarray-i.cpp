class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        int r=k-1;
        double avg=0;
        double sum=0;
        double maxavg=0;
        for (int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxavg=sum/k;
        while(r<n-1){
            sum-=nums[l];
            l++;
            r++;
            sum+=nums[r];
            avg=sum/k;
            maxavg=max(avg,maxavg);
        }
        return maxavg;
    }
};