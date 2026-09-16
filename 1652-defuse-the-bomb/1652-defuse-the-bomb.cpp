class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> ans;
        for (int i=0;i<n;i++){
            int sum=0;
            for (int j=1;j<=abs(k);j++){
                if(k>0){
                    sum+=code[(i+j)%n];
                }
                else if(k<0){
                    sum+=code[(i-j+n)%n];
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }

};