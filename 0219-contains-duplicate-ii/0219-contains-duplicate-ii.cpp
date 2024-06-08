class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>>mpNums;
    
        for(int i=0;i<nums.size();i++){
            if(mpNums.count(nums[i])){
                for(auto j: mpNums[nums[i]]){
                  if(i-j<=k) return true;
                }}
        mpNums[nums[i]].push_back(i);
        }

        return false;
        
        
    }
};