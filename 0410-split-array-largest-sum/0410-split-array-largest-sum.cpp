class Solution {
public:
bool canSplit(vector<int>& nums, int k, long long maxSum) {
        int parts = 1;
        long long currentSum = 0;
        for (int x : nums) {
            if (currentSum + x <= maxSum) {
                currentSum += x;
            }
            else {
                parts++;
                currentSum = x;
            }
        }
        return parts <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        long long low = 0;
        long long high = 0;
        for (int x : nums) {
            low = max(low, (long long)x);
            high += x;
        }
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (canSplit(nums, k, mid)) {        
                high = mid - 1;
            }
            else {             
                low = mid + 1;
            }
        }
        return (int)low;
    }
};