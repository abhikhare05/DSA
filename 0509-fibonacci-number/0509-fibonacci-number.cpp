class Solution {
public:
    
     
    int fib(int n) {
        /*if(n <= 1){
            return n;
        }
        return fib(n-1) + fib(n-2);
        
        memset(t, -1, sizeof(t));
        return solve(n);*/
        if(n <= 1){
            return n;
        }
        int a = 0, b = 1;
        int c;
        for(int i = 1; i < n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};