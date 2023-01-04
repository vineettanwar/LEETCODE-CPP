class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> dic;
        for(auto x:tasks){
            if(dic.find(x)!=dic.end()){
                dic[x]++;
            }
            else{
                dic[x]=1;
            }
        }
        int count=0;
        for(auto x:dic){
            if(x.second==1){
                return -1;
            }
            if(x.second%3==0){
                count+=(x.second/3);
            }
            else{
                count+=(x.second/3+1);
            }
        }
        return count;
    }
};