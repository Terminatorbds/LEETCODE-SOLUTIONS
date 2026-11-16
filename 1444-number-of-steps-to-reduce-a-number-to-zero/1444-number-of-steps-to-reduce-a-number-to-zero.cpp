class Solution {
public:
    int numberOfSteps(int num) {
        int buff =num,count=0;
        while (buff>0)
        {
            if (buff%2 == 0)
                buff /= 2;
            else
            buff -= 1;
            count++;
        }
        return count;
    }
};