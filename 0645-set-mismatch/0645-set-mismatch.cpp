class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        for(int x:nums){
            mpp[x]++;
        }
        
            for(int i=1;i<=nums.size();i++){
            if(mpp[i]==2){
                ans.push_back(i);
                break;
            }
            }   
                        for(int i=1;i<=nums.size();i++){     
            if(mpp[i]==0){
                ans.push_back(i);
                break;
            }
            }
      
     return ans;
    }
};