class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int>mapS;
        for (char ch:s){
            mapS[ch]++;
        }
        for (char ch:t){
            mapS[ch]--;
            if(mapS[ch] < 0) return false;
        }
        return true;
    }
};