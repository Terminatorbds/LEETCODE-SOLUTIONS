class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        char check = tolower(s[0]);
        for (int i=1;i<s.length();i++)
        {
            if (tolower(s[i]) == check)
            {
                check = tolower(s[i]);
                continue;
            }
            else
            count++;
            check = tolower(s[i]);
        }
        return count;
    }
};