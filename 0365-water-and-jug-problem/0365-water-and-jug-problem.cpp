class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        
        if(x == target || y == target){
            return true;
        }
        queue<pair<int, int>> q;
        q.push({0, 0});
        vector<vector<int>> vis(x+1, vector<int> (y+1, 0));
        vis[0][0] = 1;

        while(!q.empty()){
            int x1 = q.front().first;
            int y1 = q.front().second;
            q.pop();
            if(x1 == target || y1 == target || x1 + y1 == target){
                return true;
            }
            if(!vis[x][y1]){
                vis[x][y1] = 1;
                q.push({x1+x, y1});
            }
            if(!vis[x1][y]){
                vis[x1][y] = 1;
                q.push({x1, y});
            }
            if(!vis[0][y1]){
                vis[0][y1] = 1;
                q.push({0, y1});
            }
            if(!vis[x1][0]){
                vis[x1][0] = 1;
                q.push({x1, 0});
            }
            if(y1 >= (x - x1) && !vis[x][y1 - (x - x1)]){
                vis[x][y1 - (x - x1)] = 1;
                q.push({x, y1 - (x - x1)});
            }else if(y1 < (x - x1) && !vis[x - (x1 + y1)][0]){
                vis[x - (x1 + y1)][0] = 1;
                q.push({x - (x1 + y1), 0});
            }

            if(x1 >= (y - y1) && !vis[x1 - (y - y1)][y]){
                vis[x1 - (y - y1)][y] = 1;
                q.push({x1 - (y - y1), y});
            }
            else if(x1 < (y - y1) && !vis[0][y - (y1 + x1)]){
                vis[0][y - (y1 + x1)] = 1;
                q.push({0, y - (y1 + x1)});
            }
            
        }

        return false;
    }
};