class Solution {
public:
    int romanToInt(string s) {
        // strings are represented as arrays of characters terminated by a null character '\0'.
        //mpRoman[s[i+1]] will create a key-value pair {'\0', 0}.
        //so it doesn't throw an out_of_bounds exception
        int ans = 0;
        unordered_map <char,int> mpRoman{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        for(int i=0; i<s.size();i++){
            if(mpRoman[s[i]]<mpRoman[s[i+1]]){
                ans-=mpRoman[s[i]];
            }else{
                ans+=mpRoman[s[i]];
            }

        }

        return ans;
        }
};