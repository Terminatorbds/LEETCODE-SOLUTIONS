class Solution {
public:
    bool checkIfPangram(string sentence) {
    if (sentence.length()<26)
        return false;

    string alpha = "abcdefghijklmnopqrstuvwxyz";
    for (char c : alpha)
    {
        if (sentence.find(c) == string::npos)
            return false;
    }
     return true;
    }
};