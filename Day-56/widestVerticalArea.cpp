class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        
        int result = 0;

        for(int i = 0; i<points.size()-1; i++){
            if(points[i+1][0]-points[i][0] > result)
                result = points[i+1][0]-points[i][0];
        }
        return result;
    }
};
