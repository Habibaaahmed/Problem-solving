class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        sort(nums.begin(),nums.end());
        stack<int> nums_stack;
       
        for(auto num:nums){
            if(!nums_stack.empty() &&nums_stack.top()==num)
                nums_stack.pop();
            else
            nums_stack.push(num);
        }
        return nums_stack.top();
        
    }
};