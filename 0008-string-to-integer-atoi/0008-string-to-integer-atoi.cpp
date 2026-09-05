class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        long long num=0;
        while(i<s.size() && s[i]==' ')
        i++;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }else {
            if(s[i]=='+'){
                i++;
            }
        }
        while(i<s.size() && isdigit(s[i])){
            num=num*10+(s[i]-'0');
            if(num>INT_MAX)
            return sign==1?INT_MAX:INT_MIN;
            i++;
        }
        return num*sign;
    }
};