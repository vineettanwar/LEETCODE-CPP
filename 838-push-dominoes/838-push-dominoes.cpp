class Solution {
public:
    
    string pushDominoes(string dom) {
        
        string ans=dom;
        deque<pair<char,int>> q;
        int n=dom.length();
        
        for(int i=0;i<n;i++){
            if(dom[i]!='.'){
                q.push_back({dom[i],i});
            }
        }
        
        while(!q.empty()){
            
            auto x=q.front();
            q.pop_front();
        
            int i=x.second;
            int d=x.first;
            
            if(d=='L' && i>0 && ans[i-1]=='.'){
                q.push_back({'L',i-1});
                ans[i-1]='L';
            }
            
            else if(d=='R'){
           
                if(i+1<n && ans[i+1]=='.'){
            
                    if((i+2<n) && (ans[i+2]=='L')){
                        q.pop_front();
                    }
                
                    else{
                        q.push_back({'R',i+1});
                        ans[i+1]='R';
                    }
                }
            }
        }
        
        return ans;
    }
};