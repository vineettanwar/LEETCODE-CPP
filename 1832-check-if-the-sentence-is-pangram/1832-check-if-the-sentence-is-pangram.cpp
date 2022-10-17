class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26];
        memset(arr,-1,sizeof(arr));
        for(auto x:sentence){
            arr[x-'a']=1;
        }
        for(int i=0;i<26;i++){
            if(arr[i]==-1){
                return false;
            }
        }
        return true;
        
    }
};