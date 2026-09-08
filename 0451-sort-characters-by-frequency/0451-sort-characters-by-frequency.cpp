class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(char ch:s){
            mpp[ch]++;
        }
        vector<pair<char,int>> v;
        for(auto x:mpp){
            v.push_back({x.first,x.second});
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
           return a.second>b.second;
        });
        string ans;
        for(auto x:v){
            ans+=string(x.second,x.first);
        }
        return ans;
    }
};