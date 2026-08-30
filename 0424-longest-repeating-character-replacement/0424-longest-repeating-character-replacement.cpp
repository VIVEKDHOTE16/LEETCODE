class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int n=s.size();
        int l=0;
        int r=0;
        int maxcount=0;
        int maxlenght=0;
        while(r<n){
            freq[s[r]-'A']++;
            maxcount= max(maxcount,freq[s[r]-'A']);
            
            while((r-l+1)-maxcount>k){
                freq[s[l]-'A']--;
                l++;
            }
            maxlenght=max(maxlenght,r-l+1);
            r++;
        }
        return maxlenght;  
    }
};