class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> ma;
        for (int i=0;i<heights.size();i++)
        {
            ma[heights[i]]=names[i];
        }
        sort(heights.begin(),heights.end(),greater<int>());
        vector<string>ans;
        for (int i=0;i<heights.size();i++)
        {
            ans.push_back(ma[heights[i]]);
        }
        return ans;
    }
};