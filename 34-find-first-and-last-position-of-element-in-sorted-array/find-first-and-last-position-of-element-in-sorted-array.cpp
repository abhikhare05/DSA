class Solution {
public:

    int firstNum(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(target == nums[mid]) {
                ans = mid;
                high = mid - 1;
            }
            else if(target < nums[mid]) {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }

    int lastNum(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(target == nums[mid]) {
                ans = mid;
                low = mid + 1;
            }
            else if(target < nums[mid]) {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstNum(nums, target);
        int last = lastNum(nums, target);
        return {first, last};
    }
};