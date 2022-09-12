class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        // SORT ARRAY BECAUSE WHEN POWER UP WE WANT MAX TOKEN AND POWER DOWN WE WANT 
        // MIN TOKEN
        sort(tokens.begin(),tokens.end());
        //
        int maxscore=0;
        int score=0;
        int l=0;
        int r=tokens.size()-1;
        
        while(l<=r){
            //TRY TO INCREASE SCORE IF ENOUGH POWER
            if(power >=tokens[l]){
                power-=tokens[l];
                l++;
                score++;
                maxscore=max(maxscore,score);
            }
            // TRY FOR MORE POWER AS MAX SCORE SAVED AND TRY FOR BETTER
            else if(score > 0){
                power+=tokens[r];
                r--;
                score--;
            }
            //WE CANNOT POWER UP OR POWER DOWN THEREFORE EXIT
            else{
                break;
            }
        }
        
        return maxscore;
    }
};