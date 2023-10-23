class Solution {
public:
    
    int t[31];
    int solve(int n){
        if(n <= 1){
            return n;
        }
        if(t[n] != -1){
            return t[n];
        }
        return t[n] = fib(n-1) + fib(n-2);
    }
    
    
    int fib(int n) {
        /*if(n <= 1){
            return n;
        }
        return fib(n-1) + fib(n-2);*/
        
        memset(t, -1, sizeof(t));
        return solve(n);
    }
};