class Solution {
public:
    string clearDigits(string s) {
        for (int i=0;i<s.length();i++)
        {
            if (isdigit(s[i]))
            {
                if (i==0){
                    s.erase(i,1);
                    i--;
                }
                else {
                if (!isdigit(s[i-1]))
                {
                    s.erase(i-1,2);
                    i=i-2;
                }
                else 
                {
                    s.erase(i,1);
                    i--;
                }
                }
            }
        }
        return s;
    }
};