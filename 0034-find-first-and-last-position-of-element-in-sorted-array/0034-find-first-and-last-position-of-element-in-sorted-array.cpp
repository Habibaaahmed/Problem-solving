class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=binarySearch(nums,target,true);
        int right=binarySearch(nums,target,false);
        return {left,right};

        
    }
    int binarySearch(vector<int>& nums, int target,bool isSearchingLeft){
        int left=0;
        int right=nums.size()-1;
        int idx=-1;

        while(left<=right){
            int mid = (right+left)/2;

            if(nums[mid]>target){
                right=mid-1;
            }else if (nums[mid]<target){
                left=mid+1;
            }else {
                idx=mid;
                if(isSearchingLeft){
                    right=mid-1;
                }else{
                    left=mid+1;
                }

            }

        }
        return idx;
    }
};