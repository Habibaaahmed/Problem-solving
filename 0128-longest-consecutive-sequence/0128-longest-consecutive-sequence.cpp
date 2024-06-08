class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int longest = 1;
        unordered_set<int> st(nums.begin(), nums.end());
        
        for (auto it : st) {
            if (st.find(it-1) == st.end()) {
                int ctLong = 1;
                int x = it;
                while (st.find(x+1) != st.end()) {
                    ctLong++;
                    x++;
                }
                longest = max(longest, ctLong);
            }
        }

        return longest;
    }
};