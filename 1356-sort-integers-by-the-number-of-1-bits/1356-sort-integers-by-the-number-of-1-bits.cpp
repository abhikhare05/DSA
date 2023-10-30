class Solution {
public:
    
    
    int countBits(int num){
        int count = 0;
        while(num){
            count += num&1;
            num >>= 1;
        }
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        
        auto lambda = [&](int &a, int &b){
            int count_a = countBits(a);
            int count_b = countBits(b);
            
            if(count_a == count_b){
                return a < b;
            }
            
            return count_a < count_b;
         };
        
        
        sort(begin(arr), end(arr), lambda);
        return arr;
    }
};