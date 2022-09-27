class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        
        unordered_map<char,int> mp;
        
        for(auto x:licensePlate){
            if(isalpha(x))
            mp[tolower(x)]+=1;
        }
//         for(auto x:mp){
//             cout<<x.first<<x.second<<endl;
//         }
        
        // unordered_map<char,int> freq;
        int prev=99;
        string ans="";
        // string x;
        for(string x:words){
            unordered_map<char,int> freq=mp;
            for(auto i:x){
                if(freq.find(tolower(i))!=freq.end()){
                    freq[tolower(i)]-=1;
                    if(freq[tolower(i)]==0){
                        freq.erase(tolower(i));
                        if(freq.size()==0){
                            if(x.length()<prev){
                                prev=x.length();
                                ans=x;
                            }
                        }
                    }
                }
            }
        //     cout<<"NEW WORD"<<endl;
        //     for(auto y:freq){
        //     cout<<y.first<<y.second<<endl;
        // }
        }
        
       return ans;         
    }
};