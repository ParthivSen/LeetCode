class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 0;
        int high = 1000000;
        
        while(low<=high){
            long int mid = low + (high-low)/2;
            if(mid*mid == num){
                return true;
            }else if(mid*mid > num){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return false;
    }
};