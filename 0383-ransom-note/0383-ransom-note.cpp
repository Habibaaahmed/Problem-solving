class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> magazine_char;
        
        for(auto i: magazine){
         magazine_char[i]= magazine_char[i]+1;
      
        }
         for(auto i: ransomNote){
            if ( magazine_char[i] !=0){
              magazine_char[i]= magazine_char[i]-1;   
            }
            else{
                return false;
            }
    }
    return true;
    }
};