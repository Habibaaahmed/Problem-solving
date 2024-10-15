class Solution {
    private:
        bool solve(vector<vector<bool>> &dp, int i, int j,string &s){
            if(i==j) return dp[i][j]=true;

            if(j-i==1) return dp[i][j]= s[i]==s[j];

            return dp[i][j]= s[i]==s[j] && dp[i+1][j-1];
        }
public:
    string longestPalindrome(string s) {
         int s_size=s.size();
        int longest=0;
        int start_index=0;
        vector<vector<bool>> dp(s_size,vector<bool>(s_size,false));
        for(int g=0;g<s_size;g++){
            for(int i=0 ,j=g ;j<s_size; i++,j++){
                solve(dp,i,j,s);
                if(dp[i][j] && j-i+1 >longest) {
                    start_index=i;
                    longest= j-i+1;
                }
            }
        }
        return s.substr(start_index,longest);
    }
};