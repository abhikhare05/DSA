class Solution {
public:
    bool isPowerOfFour(int n) {
        /*if(n == 0){
            return false;
        }
        while(n % 4 == 0){
            n = n/4;
        }
        if(n == 1){
            return true;
        }
        return false;*/
        if(n <= 0){
            return 0;
        }
        int x = (log(n)/log(4));
        if(pow(4,x) == n){
            return true;
        }
        return false;
    }
};