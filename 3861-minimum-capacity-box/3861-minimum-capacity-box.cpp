class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n=capacity.size();
        int minicapacity=INT_MAX;
        int ans=-1;
        
        for(int i=0;i<n;i++){
            if(capacity[i]>=itemSize){
                if(capacity[i]<minicapacity){
                    minicapacity=capacity[i];
                    ans=i;
                }
            }
            
        }
        return ans; 
    }
};