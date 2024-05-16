class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       k = k % nums.size(); // to handle cases where k is greater than nums.size()
        
        vector<int> rotated(nums.size());
        
        // Copy the last k elements to the beginning of the rotated array
        copy(nums.end() - k, nums.end(), rotated.begin());
        
        // Copy the remaining elements to the rotated array
        copy(nums.begin(), nums.end() - k, rotated.begin() + k);
        
        nums = rotated;
/*
        for(int i=0;i<k%nums.size();i++){
            nums.insert(nums.begin(),nums[nums.size()-1]);
            nums.pop_back();
        }
   */  
    }
};