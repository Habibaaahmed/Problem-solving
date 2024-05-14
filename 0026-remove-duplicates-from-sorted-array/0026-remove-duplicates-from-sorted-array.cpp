class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> result;

        for(int i=0; i<nums.size()-1;i++){
             if(nums[i]!=nums[i+1]){
                result.push_back(nums[i]);
             }
        }
       result.push_back(nums[nums.size()-1]);
       nums=result;
        return result.size();

    }
};