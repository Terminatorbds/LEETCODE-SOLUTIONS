class Solution {
public:
    unsigned long long calculateCombination(int n, int r) {
    if (r > n) return 0;
    if (r == 0 || r == n) return 1;

    // Since nCr is symmetric, use the smaller r for efficiency
    if (r > n - r) {
        r = n - r;
    }

    unsigned long long result = 1;
    for (int i = 1; i <= r; ++i) {
        result *= (n - r + i);
        result /= i;
    }

    return result;
}
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map <int,int> ma;
        for (int i=0;i<nums.size();i++)
        {
            ma[nums[i]]++;
        }
        long long sum=0;
        for (auto& pair : ma)
        {
            if (pair.second>1)
            {
                sum += calculateCombination(pair.second,2);
            }
        }
        return sum;
    }
};