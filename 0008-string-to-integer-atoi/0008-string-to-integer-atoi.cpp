class Solution {
public:
    int myAtoi(string s) {
        int len=s.size();
        if(len==0){
            return 0;
        }
        int index=0;
        while(index<len && s[index]==' '){
            index++;
        }
        bool isnegative=false;
        if(index<len){
            if(s[index]=='-'){
                isnegative=true;
                ++index;
            }
            else if(s[index]=='+'){
                index++;
            }
        }
        int result=0;
        while(index<len && isdigit(s[index])){
            int digit=s[index]-'0';
            if(result>(INT_MAX/10) || (result==(INT_MAX/10)&& digit>7)){
                return isnegative?INT_MIN:INT_MAX;
            }
            result=(result*10)+digit;
            ++index;
        }
        return isnegative?-result:result;
        
        
    }
};