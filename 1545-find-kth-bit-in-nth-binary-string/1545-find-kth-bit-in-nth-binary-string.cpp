class Solution {
public:

    unordered_map<int,string> bits {{1,"0"}};

    string invertBits(const string& first) {
        string second;
        for (char c : first) {
            if (c == '0') {
                second += '1';  
            } else {
                second += '0';  
            }
        }
        return second;
    }
    string findBits(int n) {
        if(n==1) return "0";
        string first= bits.count(n-1)!=0? bits[n-1]:findBits(n-1);
        string second=invertBits(first);
        reverse(second.begin(), second.end());
        first+="1";
        first+=second;
        bits[n]=first;

        return first;
    }

    char findKthBit(int n, int k) {
        if(n==1) return '0';
    
        return  findBits(n)[k-1];
    }
};