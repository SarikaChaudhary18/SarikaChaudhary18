class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp; 
        int need;       
       for(int i=0;i<nums.size();i++){
         need=target-nums[i];
        if(mpp.count(need))
       return {mpp[need],i};
       mpp[nums[i]]=i;
       }
      return {};   
    }
};