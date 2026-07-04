class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            int low=0;
            int high=grid[i].size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(grid[i][mid]<0) high=mid-1;
                else low=mid+1l;
            } count +=grid[i].size()-low;
        } return count;
    }
};