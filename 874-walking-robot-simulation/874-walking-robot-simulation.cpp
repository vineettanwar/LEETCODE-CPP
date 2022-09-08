class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // given commands -1 right -2 left command>0 means 
        //move in that direction 
        
        //create obstacle set and before moving check if postion 
        // present in obstacle set if not move to that postion 
        
        unordered_set<string>obst;
        
        for(auto &x:obstacles){
            obst.insert(to_string(x[0])+":"+to_string(x[1]));
        }
        vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
        
        int d=0;
        int x=0;
        int y=0;
        int res=0;
        for(auto &c:commands){
            if(c>0){
                while(c-- && obst.count(to_string(x+dir[d][0])+":"+to_string(y+dir[d][1]))==0){
                    x=x+dir[d][0];
                    y=y+dir[d][1];
                    // int newx=x+dir[d][0];
                    // int newy=y+dir[d][1];
                    // if(obst.count(to_string(newx)+":"+to_string(newy))==0){
                    //     x=newx;
                    //     y=newy;
                    // }
                res=max(res,x*x+y*y);
                }
                    
                
            }
            
            else if(c==-1)d=(d+1)%4;
            else if(c==-2)d=(d+3)%4;
            
        }
        return res;
    }
};