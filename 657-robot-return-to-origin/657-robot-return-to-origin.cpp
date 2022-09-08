class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;
        int y=0;
        string s=moves;
        for(int i=0;i<moves.size();i++){
            if(s[i]=='U')y++;
            else if(s[i]=='D')y--;
            else if(s[i]=='R')x++;
            else x--;
        }
        return x==0 && y==0;
    }
};