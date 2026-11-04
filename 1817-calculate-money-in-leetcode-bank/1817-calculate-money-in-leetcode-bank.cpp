class Solution {
public:
    int totalMoney(int n) {
        int counter = 0;
        int sum=0;
        int add =0;
        int monday =1;
        for (int i=1;i<=n;i++)
        {
            if(counter==7)
                {
                    monday++;
                    add = monday;
                    counter=0;
                    sum +=add;
                    counter++;
                }
            else{
            add++;
            sum += add;
            counter++;
            }
            
        }
        return sum;
    }
};