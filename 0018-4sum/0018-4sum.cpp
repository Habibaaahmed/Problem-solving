class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>> nums_set;
        vector< vector<int>> result;
        if(nums.size()<4) return result;
        long  sum;

        for(int i=0 ;i<nums.size()-3;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            for(int j=i+1;j<nums.size()-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                for(int m=j+1;m<nums.size()-1;m++){
                    if(m>j+1 && nums[m]==nums[m-1])continue;
                    for(int n=m+1 ;n<nums.size();n++){
                        if(n>m+1 && nums[n]==nums[n-1])continue;
                        sum=(long)nums[i]+nums[j]+nums[m]+nums[n];
                        if(sum>target){
                            break;
                        }else if(sum==target){
                            vector<int> nums_vec;
                            nums_vec.push_back(nums[i]);
                            nums_vec.push_back(nums[j]);
                            nums_vec.push_back(nums[m]);
                            nums_vec.push_back(nums[n]);
                            nums_set.insert(nums_vec);

                        }

                    }
                }
            }
        }
        for(auto i:nums_set){
            result.push_back(i);

        }
    return result;
    }
};