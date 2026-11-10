class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<double> avs;
        int n = nums.size();
        int j=n-1;
        for (int i=0;i<n/2;i++)
        {
            int top = nums[i]+nums[j];
            avs.push_back((double)top/2);
            j--;
        }
        sort(avs.begin(),avs.end());
        return avs[0];
    }
};