class Solution {
public:
    bool isPalindrome(string s) {  
        string temp="";
        for(char c:s){
         if(isalnum(c)){
            temp+=tolower(c);
         }
        }     
        for(int i=0;i<temp.size()/2;i++){
        if(temp[i]!=temp[temp.size()-1-i]){
         return false;
         }
        }       
        return true;
    }
};