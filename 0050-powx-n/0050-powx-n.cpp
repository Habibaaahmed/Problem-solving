class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(x==0) return 0;
        if(x==1) return 1;

        double result=1;
       long long exp= static_cast<long long>(n);
       long long abs_n = exp<0? -exp:exp;

     
       while (abs_n > 0) {
        
            if (abs_n % 2 == 1) { 
                result *= x;
            }
            x *= x;  
            abs_n /= 2;  
            cout<<result<<endl;
        }
        
        return n<0? 1/result: result;
    }
};