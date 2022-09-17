class Solution {
    private:
    bool isPalindrome(string s1){
        int start=0;
        int end=s1.size()-1;
        while(start<=end){
            if(s1[start]!=s1[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
       vector<vector<int>> ans;
        int n = words.size();
        if(n<2) return ans;
        unordered_map<string, int> m;
        for(int i=0;i<n;++i){
            
            auto s= words[i];
            reverse(s.begin(),s.end());
            m[s]=i;
        }
        
        for(int i=0; i<n; ++i){
            for(int j=0; j<=words[i].size(); ++j){
                string st1 = words[i].substr(0,j); // prefix
                string st2 = words[i].substr(j);    //sufix           
                 
                 if(m.count(st1) && isPalindrome(st2) && m[st1] != i) {
                     ans.push_back({i, m[st1]});    
                 }

                 if(!st1.empty() && m.count(st2) && isPalindrome(st1) && m[st2] != i) {
                     ans.push_back({m[st2], i});
                 }
            }            
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         vector<vector<int>> ans;
//         map<string,int> exists;
//         for(int i=0;i<words.size();i++){
//             exists[words[i]]=i+1;
//         }
//         for(int i=0;i<words.size();i++){
//             for(int j=i+1;j<words.size();j++){
//                 string r=words[j];
//                 reverse(r.begin().r.end());
//                 if(exists[r]){
//                     ans.push_back({j,exists[r]-1});
//                     continue;
//                 }
//                 string s1=(words[i]+words[j]);
//                 string s2=(words[j]+words[i]);
//                 if(ispalindrome(s1)){
//                     ans.push_back({i,j});
//                 }
//                 if(ispalindrome(s2)){
//                     ans.push_back({j,i});
//                 }
//             }
//         }
//         for(int i=0;i<words.size();i++){
//             for(int j=i+1;j<words.size();j++){
//                 string s1=(words[i]+words[j]);
//                 string s2=(words[j]+words[i]);
//                 if(ispalindrome(s1)){
//                     ans.push_back({i,j});
//                 }
//                 if(ispalindrome(s2)){
//                     ans.push_back({j,i});
//                 }
//             }
//         }
//         return ans;
        
        
    }
};