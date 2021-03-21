class Solution {
public:
    double pow(double x, long n){
        if(n==0)
            return 1.0;
        double half = pow(x,n/2);
        if(n%2==0){
            return half*half;
        }else{
            return half*half*x;
        }
    }
    double myPow(double x, int n) {
        long long N=n;
        return n<0 ? 1/pow(x,-N):pow(x,N);
    }
};