class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum =0, squareSum=0;
        int good=0,right=0;
        while (n>0)
        {
            right = n%10;
            digitSum += right;
            squareSum += right*right;
            n=n/10;
        }
        if (squareSum - digitSum >= 50)
        return true;
        else 
        return false;
    }
};