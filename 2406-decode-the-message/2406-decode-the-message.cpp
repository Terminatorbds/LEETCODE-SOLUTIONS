class Solution {
public:
    string decodeMessage(string key, string message) {
        char start = 'a';
        unordered_map <char,char> ma;
        
        for (int i=0;i<key.length();i++)
        {
            if (key[i]==' ')
            continue;
            auto it = ma.find(key[i]);
            if (it != ma.end())
            continue;
            ma[key[i]]=start;
            start = start +1;
        }
        string ans;
        ans.reserve(message.length());
        for (int i=0;i<message.length();i++)
        {
            if (message[i]==' ')
            ans.push_back(' ');
            else
            ans.push_back(ma[message[i]]);
        }
        return ans;

    }
};