class Solution {
public:
    bool canSplit(vector<int> &nums,int k,long long maxSum){
        int count=1;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=maxSum){
                sum+=nums[i];
            }else{
                count++;
                sum=nums[i];
            }
        }
        return count<=k;
    }
    int splitArray(vector<int>& nums, int k) {
       long long low=*max_element(nums.begin(),nums.end());
       long long high=accumulate(nums.begin(),nums.end(),0LL); 
       long long ans=high;
       while(low<=high){
        long long mid=(low+high)/2;
        if(canSplit(nums,k,mid)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
       }
       return ans;
    }
};