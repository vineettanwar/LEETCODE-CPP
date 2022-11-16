/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
//         while(true){
//             int mid =int(n/2);
//             int x=guess(mid);
//             if(x==0){
//                 return mid;
//                 break;
//             }
//             else if(x==1){
//                 n=mid+1;
//             }
//             else{
//                 n=mid-1;
//             }
            
//         }
        int l=1;
        int h=n;
        while(l<=h){
            int mid=l+(h-l)/2;
            int x=guess(mid);
            if(x==0){
                return mid;
                break;
            }
            else if(x==1){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return 1;
    }
};