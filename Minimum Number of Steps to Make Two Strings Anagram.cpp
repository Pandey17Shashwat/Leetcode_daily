class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> mp1,mp2;
        for(int i=0;i<(int)s.size();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<(int)t.size();i++){
            mp2[t[i]]++;
        }
        
        int ans1 = 0, ans2 = 0;
        
        for(auto x : mp1){
            char ch = x.first;
            if(mp2[ch] < x.second){
                ans1 += x.second - mp2[ch];
            }
        }
        
        for(auto x : mp2){
            char ch = x.first;
            if(mp1[ch] < x.second){
                ans2 += x.second - mp1[ch];
            }
        }
        
        return min(ans1,ans2);
    }
};