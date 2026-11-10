class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int secs=0;
        if (requests.size()>1)
            secs=requests[0] + abs(requests[1]-requests[0]);
        else 
            secs=requests[0];
        for (int i=1;i<requests.size();i++)
        {
            if (i+1 < requests.size())
            {
                secs += abs(requests[i+1]-requests[i]);
            }
        }
        return secs;
    }
};