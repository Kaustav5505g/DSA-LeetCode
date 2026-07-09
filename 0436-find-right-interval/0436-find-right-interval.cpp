class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<pair<int,int>>s;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            s.push_back({intervals[i][0],i});
        }
        sort(s.begin(),s.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int end=intervals[i][1];
            auto it=lower_bound(
                s.begin(),
                s.end(),
                make_pair(end,-1)
            );
            if(it==s.end())ans[i]=-1;
            else ans[i]=it->second;

        }return ans;
        
    }
};