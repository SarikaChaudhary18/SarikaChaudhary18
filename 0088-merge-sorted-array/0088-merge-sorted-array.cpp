class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        std::merge(nums1.begin(),nums1.begin()+m,
        nums2.begin(),nums2.begin()+n,
        back_inserter(ans));
       nums1=ans;
        for(int x:ans){
            cout<<x<<" ";
        }
    }
};