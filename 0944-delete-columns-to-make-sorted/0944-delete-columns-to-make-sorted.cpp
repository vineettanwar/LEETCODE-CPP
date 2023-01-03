class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0;
        for(int x=0;x<strs[0].size();x++){
            for(int i=1;i<strs.size();i++){
                if(strs[i][x]<strs[i-1][x]){
                    count++;
                    break;
                }
        }
        }
        return count;
    }
};