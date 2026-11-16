class Solution {
public:
    int smallestEvenMultiple(int n) {
        int buff = n;
        while (true)
        {
            if (buff%2 == 0 && buff%n==0)
                return buff;
            else
            buff *=2;
        }
    }
};