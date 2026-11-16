class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int buff =0;
        sort (nums.begin(),nums.end());
        for (int i=0;i<nums.size();i+=2)
        {
            if (i+1 < nums.size())
            {
                buff = nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=buff;
            }
        }
        return nums;
    }
};