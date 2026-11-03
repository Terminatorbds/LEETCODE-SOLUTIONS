class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int start =nums[0];
        int j=0;
        for (int i=start;i<nums[nums.size()-1];i++)
        {
            if (j<nums.size() && nums[j]==start)
                {
                    start++;
                    j++;
                }
            else
            {
                ans.push_back(start);
                start++;
            }
        }
        return ans;
    }
};