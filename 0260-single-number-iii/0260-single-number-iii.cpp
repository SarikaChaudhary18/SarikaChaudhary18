class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int x:nums){
            mpp[x]++;
        }
        for(int x:nums){
            if(mpp[x]==1){
                ans.push_back(x);
            }
        }
        return ans;
    }
};