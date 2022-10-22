//question link:

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n = points.size();
        vector<int> dis;
        for(int i=0; i<n; i++){
            int x = points[i][0];
            int y = points[i][1];
            int z = sqrt(x*x + y*y);
            dis.push_back(z);
        }
        vector<vector<int>> ans;
        for(int i=0; i<k; i++){
            int min = i;
            for(int j=i; i<n; i++){
                if(dis[i]<dis[min]){
                    min = i;
                }
            }
            ans.push_back(points[min]);
        }
        return ans;
    }
};