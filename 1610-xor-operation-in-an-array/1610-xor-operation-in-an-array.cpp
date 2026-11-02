class Solution {
public:
    int xorOperation(int n, int start) {
        int sum=0;
        int buff=0;
        for (int i=0;i<n;i++)
        {
            buff = start + (2*i);
            if (i==0)
            sum = buff;
            else 
            sum ^= buff;
        }
        return sum;
    }
};