class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]<9){
            digits[digits.size()-1]=digits[digits.size()-1]+1;
        }
        else{
        for(int i=digits.size()-1;i>=0;i-- ){
         if(digits[i]==9 && i!=0){
             digits[i]=0;

        }else if(digits[i]==9 && i==0){
              digits[i]=0;
             digits.insert(digits.begin(),1);
         }else if(digits[i]!=9 ){
             digits[i]=digits[i]+1;
             break;
             
         }
     }}
        
        return digits;
    }
};