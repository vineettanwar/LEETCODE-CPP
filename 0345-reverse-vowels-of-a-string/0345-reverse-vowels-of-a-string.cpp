class Solution {
public:
    string reverseVowels(string s) {
        string h="";
        for(int start=0;start<s.length();start++){
            if(s[start]=='a'|| s[start]=='e'|| s[start]=='i'
                 || s[start]=='o'|| s[start]=='u'|| s[start]=='A'|| s[start]=='E'
                 || s[start]=='I'|| s[start]=='O'|| s[start]=='U'){
                h+=s[start];
            }
            
        }
        reverse(h.begin(),h.end());
        int c=0;
        for(int start=0;start<s.length();start++){
            if(s[start]=='a'|| s[start]=='e'|| s[start]=='i'
                 || s[start]=='o'|| s[start]=='u'|| s[start]=='A'|| s[start]=='E'
                 || s[start]=='I'|| s[start]=='O'|| s[start]=='U'){
                s[start]=h[c];
                c++;
            }
        }
        return s;
    }
};