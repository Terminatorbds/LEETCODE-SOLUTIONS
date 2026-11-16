class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int buff = n;
        for (int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
            if (buff<nums.size())
            ans.push_back(nums[buff]);
            buff++;
        }
        return ans;
    }
};