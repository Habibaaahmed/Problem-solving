class Solution {
public:
    int hammingWeight(int n) {
        int ones_num=0;
        while(n!=0){
        if(n%2==1) ones_num++;
        n=n/2;
        }
        return ones_num; 
        
    }
};