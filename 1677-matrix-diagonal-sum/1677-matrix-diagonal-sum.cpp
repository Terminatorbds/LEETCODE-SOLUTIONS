class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum =0;
        int end =mat.size()-1;
        for (int i=0;i<mat.size();i++)
        {
            sum += mat[i][i];
            sum += mat[i][end];
            end--;
        }
        if (mat.size() %2 != 0)
        {
            sum -= mat[(mat.size()-1) / 2][(mat.size()-1) / 2];
        }
        return sum;
    }
};