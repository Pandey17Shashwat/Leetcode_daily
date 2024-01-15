class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> mp;
        for(int i=0;i<(int)matches.size();i++){
            if(mp.count(matches[i][0]) == 0){
                mp[matches[i][0]] = 0;
            }
            mp[matches[i][1]]++;
        }

        vector<int> ans1,ans2;
        for(auto x : mp){
            if(x.second == 0){
                ans1.push_back(x.first);
            }else if(x.second == 1){
                ans2.push_back(x.first);
            }
        }

        vector<vector<int>> ans;
        ans.push_back(ans1);
        ans.push_back(ans2);

        return ans;
    }
};