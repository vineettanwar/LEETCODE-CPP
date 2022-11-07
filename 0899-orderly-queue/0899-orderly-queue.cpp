class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1){
            string smal=s;
            for(int j=0;j<(s.length()-1);j++){
                s=s.substr(1)+s[0];
                smal=min(smal,s);
            }
            return smal;
        }
        else{
            sort(s.begin(),s.end());
            return s;
        }
    }
};