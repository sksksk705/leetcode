class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1 = 0, i2 = 0;
        if (nums2.empty())
            return;
        if (nums1.size() == nums2.size()) {
            nums1 = nums2;
            return;
        }
        vector<int> temp;
        while (i1 < nums1.size() - nums2.size() || i2 < nums2.size()) {
            if (i1 >= nums1.size() - nums2.size()) {
                temp.push_back(nums2[i2]);
                i2++;
            }
            else if (i2 >= nums2.size()) {
                temp.push_back(nums1[i1]);
                i1++;
            }
            else {
                if (nums1[i1] < nums2[i2]) {
                    temp.push_back(nums1[i1]);
                    i1++;
                }
                else {
                    temp.push_back(nums2[i2]);
                    i2++;
                }
            }
        }
        nums1 = temp;
    }
};