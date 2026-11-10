class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> out;
        out.push_back(first);
        for (int i=0;i<encoded.size();i++)
        {
            out.push_back(encoded[i] ^ out[i]);
        }
        return out;
    }
};