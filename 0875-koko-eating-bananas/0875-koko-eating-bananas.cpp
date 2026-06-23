class Solution {
    int findMax(vector<int>& piles){
        int n=piles.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long calculatehours(vector<int>& piles, int h){
        long long totalH=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalH += ceil((double)piles[i] / (double)h);
        }
        return totalH;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=findMax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long totalH = calculatehours(piles,mid);
            if(totalH <= h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        } 
        return low;
    }

};