class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(),nums.end());
       int maxLen=1;
        int currLen=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums.empty()) return 0;
           else if(nums[i]==nums[i+1])
            continue;
            else if(nums[i]+1==nums[i+1]){
                currLen++;
                maxLen=max(currLen,maxLen);
            }
            else{
               currLen=1;
            }             
      }
       return maxLen=max(currLen,maxLen);
    }
};