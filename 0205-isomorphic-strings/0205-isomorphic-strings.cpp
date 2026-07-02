class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n != m) return false;
        unordered_map<char,char>mapS,mapT;

        for (int i=0; i<n;i++){
            char cs=s[i],ct=t[i];
            if(mapS.count(cs) && mapS[cs] != ct) return false;
            if(mapT.count(ct) && mapT[ct] != cs) return false;

            mapS[cs]=ct;
            mapT[ct]=cs;
        }
        return true;
    }
};