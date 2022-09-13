class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int rembytes=0;
        for(auto x:data){
            if(rembytes==0){
                // CHECK IF NUM IS 2 BYTE 
                if(x>>5 == 0b110){
                    rembytes=1; // NOW CHECK 1 MORE ELEMENT 
                }
                //CHECK IF NUM IS 3 BYTE
                else if(x>>4 == 0b1110){
                    rembytes=2; // NOW CHECK NEXT TWO ELEMENT 
                }
                // CHECK IF NUM IS 4 BYTE 
                else if(x>>3 == 0b11110){
                    rembytes=3; // NOW CHECK NEXT THREE ELEMENT
                }
                
                else if(x>>7 !=0){
                    return false;  // NOT 2 3 4 ELEMENT IS 1 BYTE CHECK CONDITION
                }
            }
            // FOR CHECKING NEXT ELEMENT IF MORE THAN 1 BYTE ELEMENT FOUND IN UPPER CONDITION
            else{
                if(x>>6==0b10){
                    rembytes--;
                }
                else{
                    return false;
                }
            }
        }
        // AFTER PROCESSING ALL ELEMENTS REMAINING BYTES SHOULD BE 0 AND WE HAVE PROCESSED
        // ALL ELEMETS RETURN TRUE ELSE FALSE
        if(rembytes==0){
            return true;
        }
        return false;
        
        
        
        
        
    }
};