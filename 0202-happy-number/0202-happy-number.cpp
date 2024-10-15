class Solution {
public:
    bool isHappy(int n) {
        if(n<=0) return false;
        unordered_map<int,int> repeated;
        int digit;
        bool res=false;
        int result=0;

        while(!res){
            if(n==0){
            if(result==1) return res=true;
              n=result;
              repeated[n]++;
              if(repeated[n]==2) return res=false;
              result=0;
            }
            digit=n%10;
            result+=digit*digit;
            n/=10;
        
        }
        
         return res;
    }
};