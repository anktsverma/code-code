class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
    
            double sq=myPow(x,abs(n/2));
            sq=sq*sq;
            if(n>0 && n&1) return sq*x;
            else if(n>0) return sq;
            if(n<0 && n&1) return 1/(sq*x);
            else if(n<0) return 1/sq;
        return -1;
    }
};