class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum =0,buff=x;
        while (buff>0)
        {
            sum += buff%10;
            buff /=10;
        }
        if (x%sum == 0)
            return sum;
        else 
        return -1;

    }
};