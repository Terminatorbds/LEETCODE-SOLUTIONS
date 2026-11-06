class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        
        for (int i=0;i<nums.size();i++)
        {
            stack<int> ss;
            int right=0;
            while (nums[i]>0)
            {
                right = nums[i]%10;
                nums[i] /=10;
                ss.push(right);
            }
            while (!ss.empty())
            {
                ans.push_back(ss.top());
                ss.pop();
            }

        }
        return ans;
    }
};