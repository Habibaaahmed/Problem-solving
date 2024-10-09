class Solution {
public:
    int candy(vector<int>& ratings) {
        int size=ratings.size();
        vector<int> result(size, 1);
        
         // Left to right pass
        for (int i = 0; i < size - 1; i++) {
            if (ratings[i] < ratings[i + 1]) {
                result[i + 1] = result[i] + 1;
            }
        }

        // Right to left pass
        for (int i = size - 1; i > 0; i--) {
            if (ratings[i - 1] > ratings[i]) {
                result[i - 1] = max(result[i - 1], result[i] + 1);
            }
        }

        int sum = accumulate(result.begin(), result.end(), 0);
        return sum;
        
    }
};