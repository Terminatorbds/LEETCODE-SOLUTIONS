class Solution {
public:
    char shift (char c, int x, string s)
    {
        for (int i=0;i<s.length();i++)
        {
            if (s[i]==c)
            return s[i]+x;
        }
        return -1;
    }
    string replaceDigits(string s) {
        for (int i=1;i<s.length();i++)
        {
            if (i%2 != 0)
            {
                s[i] = shift(s[i-1], s[i]-'0',s);
            }
        }
        return s;
    }
};