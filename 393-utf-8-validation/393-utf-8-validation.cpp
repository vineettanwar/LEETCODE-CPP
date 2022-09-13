class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int rembytes=0;
        for(auto x:data){
            if(rembytes==0){
                if(x>>5 == 0b110){
                    rembytes=1;
                }
                else if(x>>4 == 0b1110){
                    rembytes=2;
                }
                else if(x>>3 == 0b11110){
                    rembytes=3;
                }
                else if(x>>7 !=0){
                    return false;
                }
            }
            else{
                if(x>>6==0b10){
                    rembytes--;
                }
                else{
                    return false;
                }
            }
        }
        if(rembytes==0){
            return true;
        }
        return false;
        
        
        
        
        
    }
};