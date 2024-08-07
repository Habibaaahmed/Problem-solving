class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        /*
        multimap<int, int> mmap;
        vector<int> result;

        for (int i = 0; i < m; i++) {
            mmap.insert({nums1[i], i});
        }

        for (int i = 0; i < n; i++) {
            mmap.insert({nums2[i], i});
        }

        for ( auto pair : mmap) {
            result.push_back(pair.first);
        }

     
        nums1 = result;
        */
         vector<int> result;
        for (int i = 0; i < m; i++) {
           result.push_back(nums1[i]);
        }
          for (int i = 0; i < n; i++) {
           result.push_back(nums2[i]);
        }
        sort(result.begin(),result.end());
        nums1=result;

    }
};