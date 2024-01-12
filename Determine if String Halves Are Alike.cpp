class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        vector<int> prefix(n);
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'i' || s[i] == 'I'){
                cnt++;
            }
            
            prefix[i] = cnt;
        }
        
        if(cnt % 2 == 1)return false;
        
        int target = cnt/2;
        
        int index = n/2-1;
        if(prefix[index] == target)return true;
        
        return false;
    }
};