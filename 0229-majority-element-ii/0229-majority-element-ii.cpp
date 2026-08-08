class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     unordered_map<int,int> mpp;
     vector<int> ans;
     for(int x:nums){
        mpp[x]++;
     }
     for(auto it:mpp){
        if(it.second>(nums.size())/3){
           ans.push_back(it.first);
        }
     }
     return ans;
    }
};