class Solution {
public:
    int countAsterisks(string s) {
        int dashes=0;
        int count=0;
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='|' && dashes==0){
            dashes++;
            continue;}

            if (s[i]=='|' && dashes>=1){
            dashes=0;
            continue;}

             if (dashes==0)
            {
                if (s[i]=='*')
                    count++;
            }
            
        }
        return count;
    }
};