class Solution {
public:
    bool isvowel(char c){
        return c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u'
            || c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U';
    }
    string reverseVowels(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<end){
            while(start<s.size() and !isvowel(s[start])){
                start++;
            }
            while(end>=0 && !isvowel(s[end])){
                end--;
            }
            if(start<end){
                swap(s[start++],s[end--]);
            }
        }
//         string h="";
//         for(int start=0;start<s.length();start++){
//             if(s[start]=='a'|| s[start]=='e'|| s[start]=='i'
//                  || s[start]=='o'|| s[start]=='u'|| s[start]=='A'|| s[start]=='E'
//                  || s[start]=='I'|| s[start]=='O'|| s[start]=='U'){
//                 h+=s[start];
//             }
            
//         }
//         reverse(h.begin(),h.end());
//         int c=0;
//         for(int start=0;start<s.length();start++){
//             if(s[start]=='a'|| s[start]=='e'|| s[start]=='i'
//                  || s[start]=='o'|| s[start]=='u'|| s[start]=='A'|| s[start]=='E'
//                  || s[start]=='I'|| s[start]=='O'|| s[start]=='U'){
//                 s[start]=h[c];
//                 c++;
//             }
//         }
//         return s;
        return s;
    }
};