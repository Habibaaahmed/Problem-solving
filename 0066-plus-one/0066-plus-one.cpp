class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result=digits;
        if(digits[digits.size()-1]<9){
            result[digits.size()-1]=digits[digits.size()-1]+1;
        }
        else{
          //  result[digits.size()-1]=1;
            //result.push_back(0);
     for(int i=digits.size()-1;i>=0;i-- ){
         if(result[i]==9 && i!=0){
             result[i]=0;

        }else if(result[i]==9 && i==0){
              result[i]=0;
             result.insert(result.begin(),1);
         }else if(result[i]!=9 ){
             result[i]=digits[i]+1;
             result[i+1]=0;
             break;
             
         }
     }}
        
        return result;
    }
};