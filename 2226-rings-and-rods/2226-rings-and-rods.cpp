class Solution {
public:
    int countPoints(string rings) {
        unordered_map<char, unordered_set<char>> ma;
        
        // Step 1: Parse in pairs of (color, rod)
        for (int i = 0; i < rings.length(); i += 2) {
            char color = rings[i];
            char rod = rings[i + 1];
            ma[rod].insert(color);
        }
        
        // Step 2: Count rods that have all 3 colors (size == 3)
        int ans = 0;
        for (auto& pair : ma) {
            if (pair.second.size() == 3) {
                ans++;
            }
        }
        return ans;
    }
};