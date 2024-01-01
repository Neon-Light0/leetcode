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
        
        int left = 1;
        int right = n;
        int mid = left + (right - left) / 2;
        int result = guess(mid);
        
        while (left <= right){
            if (result > 0){
                left = mid + 1;
            } else if (result < 0){
                right = mid - 1;
            } else {
                return mid;
            }
            
            mid = left + (right - left) / 2;
            result = guess(mid);
        }
        
        return mid;
    }
};