class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> startCities;
        
        // Step 1: Store all starting cities
        for (const auto& path : paths) {
            startCities.insert(path[0]);
        }
        
        // Step 2: Find the destination city that isn't a starting city
        for (const auto& path : paths) {
            if (startCities.find(path[1]) == startCities.end()) {
                return path[1];
            }
        }
        
        return "";
    }
};