class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int counter=1;
        int index=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
            counter++;
            }else{
                counter=1;
            }
            if(counter<=2){
                nums[index++]=nums[i];
            }
        }
        return index;
        
    }
};