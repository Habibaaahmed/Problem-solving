class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      bool isEven;
        int index1;
        int index2;
        int sizeResult;
        vector<int> result;

        if ((nums1.size() + nums2.size()) % 2 == 0) {
            isEven = true;
            index1 = (nums1.size() + nums2.size()) / 2;
            index2 = index1 - 1;
            sizeResult = index1 + 1;
        } else {
            isEven = false;
            sizeResult = (nums1.size() + nums2.size() + 1) / 2;
            index1 = sizeResult - 1;
        }

        int i = 0;
        int j = 0;
        while (result.size() < sizeResult) { 
            if (i < nums1.size() && j < nums2.size()) {
                if (nums1[i] < nums2[j]) {
                    result.push_back(nums1[i]);
                    i++;
                } else {
                    result.push_back(nums2[j]);
                    j++;
                }
            } else if (i < nums1.size()) {
                result.push_back(nums1[i]);
                i++;
            } else if (j < nums2.size()) {
                result.push_back(nums2[j]);
                j++;
            }
        }

        if (isEven) {
            return (result[index1] + result[index2]) / 2.0; 
        } else {
            return result[index1];
        }
    }
};