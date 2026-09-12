class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int>mpp1;
        unordered_map<int,int>mpp2;
        for(int i=0;i<n;i++){
            mpp1[nums1[i]]++;
        }
        for(int i=0;i<m;i++){
            mpp2[nums2[i]]++;
        }
        vector<int> ans1;
        vector<int> ans2;

        for(auto element : mpp1 ){
            int key=element.first;
            if(mpp2.find(key)==mpp2.end()){
                ans1.push_back(key);
            }
        }
        for(auto element : mpp2 ){
            int key=element.first;
            if(mpp1.find(key)==mpp1.end()){
                ans2.push_back(key);
            }
        }
        return {ans1,ans2};
        
    }
};