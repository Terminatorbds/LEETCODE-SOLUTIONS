class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int min=0;
        int sum=0;
        for (int i=0;i<tasks.size();i++)
        {
            sum =0;
            for (int j=0;j<tasks[i].size();j++)
            {
                sum += tasks[i][j];
            }
            if (i==0)
            min = sum;
            else
            {
                if (sum<min)
                min = sum;
            }
        }
        return min;
    }
};