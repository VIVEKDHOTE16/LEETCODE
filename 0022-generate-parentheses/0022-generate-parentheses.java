class Solution {
    public List<String> generateParenthesis(int n) {
        List<String>[] dp=new ArrayList[n+1];

        for(int i=0;i<n+1;i++){
            dp[i]= new ArrayList<>();
        }
        dp[0].add("");

        for(int i=1;i<n+1;i++){
            for (int j=0;j<i;j++){
                for (String left : dp[j]) {
                   for (String right : dp[i-j-1]) {
                    dp[i].add("(" + left + ")" + right);

                   }
                }

            }
        }
        return dp[n];
    }
}