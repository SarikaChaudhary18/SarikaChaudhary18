class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
         int L=0;
         int ans=0;
         for(int R=0;R<s.size();R++){
            mp[s[R]]++;
            while(mp[s[R]]>1){
                mp[s[L]]--;
                L++;
            }
            ans=max(ans,R-L+1);
         }
         return ans;
    }
};