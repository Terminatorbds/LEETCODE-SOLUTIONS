class Solution {
public:
    string finalString(string s) {
        string dup="";
        for (int i=0;i<s.length();i++)
        {
            if (s[i]!='i')
                dup += s[i];
            else
                {
                    reverse(dup.begin(),dup.end());
                }
        }
        return dup;
    }
};