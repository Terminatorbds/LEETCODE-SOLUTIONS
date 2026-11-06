class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n * n;
        vector<int> count(size + 1, 0);
        
        int repeated = -1, missing = -1;
        
        // Count frequencies
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                count[grid[i][j]]++;
            }
        }
        
        // Find which one appears twice and which one appears zero times
        for (int i = 1; i <= size; i++) {
            if (count[i] == 2) repeated = i;
            if (count[i] == 0) missing = i;
        }
        
        return {repeated, missing};
    }
};