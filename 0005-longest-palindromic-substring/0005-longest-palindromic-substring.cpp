class Solution {
public:
    string longestPalindrome(string s) {
       int start=0;
       int maxLen=1;
       for(int i=0;i<s.size();i++){
        int L=i,R=i;
        while(L>=0 && R<s.size() && s[L]==s[R]){
            if(R-L+1>maxLen){
                start=L;
                maxLen=R-L+1;
            }
            L--;
            R++;
        }
        L=i;
        R=i+1;
        while(L>=0 && R<s.size() && s[L]==s[R]){
            if(R-L+1>maxLen){
                start=L;
                maxLen=R-L+1;
            }
            L--;
            R++;
        }
       }
       return s.substr(start,maxLen);
           }
};