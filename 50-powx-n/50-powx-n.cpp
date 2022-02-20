class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        if(n>0){
            double sans=myPow(x,n/2);
            sans*=sans;
            if(n&1){
                return x*sans;
            }
            return sans;
        }
        else{
            int temp=abs(n);
            double sans=myPow(x,temp/2);
            sans*=sans;
            if(n&1){
                return 1/(x*sans);
            }
            return 1/sans;
        }
    }
};