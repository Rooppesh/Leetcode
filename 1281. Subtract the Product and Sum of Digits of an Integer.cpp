class Solution {
public:
    int subtractProductAndSum(int n) {
        int a;
        int p = 1;
        int s = 0;
        while(n>0)
        {
            a = n%10;
            n = n/10;
            p = p*a;
            s = s+a; 
        }
        return p-s;
    }
};