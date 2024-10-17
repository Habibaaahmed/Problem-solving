class Solution {
private:
    unordered_map<int,pair<int,int>> binsum={{0,{0,0}},{1,{0,1}},{2,{1,0}},{3,{1,1}}};
    pair<int,int>binarysum(int x,int y,int z){
        int result=x+y+z;
        return binsum[result];
    }
public:
    string addBinary(string a, string b) {
        string result="";
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;

        while(i>=0||j>=0){
            int a_int=i>=0?a[i--]-'0':0;
            int b_int=j>=0?b[j--]-'0':0;
            pair<int, int> summation = binarysum(a_int, b_int, carry);
            result = to_string(summation.second) + result;
            carry= summation.first;
        }

        return carry? '1'+result:result;
        
    }
};
