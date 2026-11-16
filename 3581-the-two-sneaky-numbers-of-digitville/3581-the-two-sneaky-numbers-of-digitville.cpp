class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> ma;
        for (int i=0;i<nums.size();i++)
        {
            ma[nums[i]]++;
        }
        vector<int> ans;
        for (auto &pair : ma)
        {
            if (pair.second == 2)
                ans.push_back(pair.first);
        }
        return ans;
    }
};