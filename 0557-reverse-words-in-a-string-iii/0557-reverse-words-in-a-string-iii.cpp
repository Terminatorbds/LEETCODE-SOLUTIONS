class Solution {
public:
    string reverseWords(string s) {
        stack<char> store;
        string ans;
        for (int i=0;i<s.length();++i)
        {
            if (s[i]!=' ')
            {
                store.push(s[i]);
            }
            if (s[i]==' ' || i+1==s.length())
            {
                while (!store.empty())
                {
                    ans.push_back(store.top());
                    store.pop();
                }
                if (i+1!=s.length())
                ans.push_back(' ');
            }
        }
        return ans;
    }
};