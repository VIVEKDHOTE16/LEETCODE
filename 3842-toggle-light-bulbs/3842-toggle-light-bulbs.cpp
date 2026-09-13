class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n=bulbs.size();
        vector<int>ans;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[bulbs[i]]++;
        }
        for(auto element : mpp){
            int bulb=element.first;
            int freq=element.second;
            if(freq%2!=0){
                ans.push_back(bulb);
            }
        }
        return ans;
        
    }
};