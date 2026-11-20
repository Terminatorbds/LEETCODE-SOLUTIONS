class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum =0;
        for (int i=0;i<nums.size();i++)
            sum += nums[i];
        
        int left =0,right=0;
        vector<int> ans;
        left = nums[0];
        ans.push_back(abs(sum-nums[0]));
        for (int i=1;i<nums.size();i++)
        {
            right = sum -nums[i] - left;
            ans.push_back(abs(left-right));
            left +=nums[i];
        }
        return ans;
    }
};