class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        s += s;

        int n=s.size();
        int m=goal.size();

        for (int i=0;i<=n-m;i++){
            bool match = true;
            for (int j=0;j<m;j++){
                if(s[i+j] != goal[j]){
                    match = false;
                    break;
                }
            }
            if (match) return true;
        }
        return false;

    }
};