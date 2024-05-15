class Solution {
public:
    int majorityElement(vector<int>& nums) {
  vector<int>result={};
  int majorityElement=0;
  int count=0;
  int maxCount=0;
  for(int i=0;i<nums.size();i++){ 
    if(std::find(result.begin(), result.end(),nums[i])==result.end()){
        result.push_back(nums[i]);
        count=std::count(nums.begin(), nums.end(),nums[i]);
        if(count>(nums.size()/2) && count>maxCount){
            maxCount=count;
            majorityElement=nums[i];
        }

    }

  }
  return majorityElement;
    }
};