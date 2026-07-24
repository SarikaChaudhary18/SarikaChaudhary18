class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=(nums.size()*(nums.size()+1))/2;
        int currentSum=0;
       for(int i=0;i<nums.size();i++){
        currentSum+=nums[i];
       }
       int MissingNumber=sum-currentSum;
       return MissingNumber;
    }
};