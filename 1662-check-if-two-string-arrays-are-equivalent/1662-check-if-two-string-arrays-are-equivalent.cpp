class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string x="";
        string y="";
        for(auto v:word1){
            x+=v;
        }
        for(auto t:word2){
            y+=t;
        }
        return x==y;
       
        
        
    }
};