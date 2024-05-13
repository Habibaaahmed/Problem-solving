class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int> indicesResult;

        for(int j=0; j<size;j++){
        for(int i=j+1; i<size;i++){
            if(nums[j]+nums[i]== target){
                indicesResult.push_back(j); 
                indicesResult.push_back(i);    
               return indicesResult;      
            }
         }
        }
        return indicesResult;    
    }
};