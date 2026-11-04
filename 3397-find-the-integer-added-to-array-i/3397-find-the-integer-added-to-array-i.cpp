class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int sums1 = 0, sums2 = 0;
        for (int i = 0; i < nums1.size(); i++) {
            sums1 += nums1[i];
            sums2 += nums2[i];
        }
        int n = nums1.size(); // Store size as a signed int
        int dif = sums2 - sums1;
        int ans = dif / n;     // Safe signed division
        return ans;
    }
};