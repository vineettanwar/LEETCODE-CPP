class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> dic;
        for(auto x:tasks){
            dic[x]++;
            // if(dic.find(x)!=dic.end()){
            //     dic[x]++;
            // }
            // else{
            //     dic[x]=1;
            // }
        }
        int count=0;
        for(auto [y,x]:dic){
            if(x==1){
                return -1;
            }
            if(x%3==0){
                count+=(x/3);
            }
            else{
                count+=(x/3+1);
            }
        }
        return count;
    }
};