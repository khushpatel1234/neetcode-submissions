class Solution {
public:
    double myPow(double x, int n) {
        double temp = x;
        if(n>0){
        for(int t = 0;t<n-1;t++){
            x*=temp;
        }
        }
        else{
            for(int t = 0;t<abs(n-1);t++){
            x/=temp;
        }
        }
        return x;
    }
};
