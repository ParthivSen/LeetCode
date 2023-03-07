class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        while(low <= high){
            if(x==0)
                return 0;
            if(x==1)
                return 1;
            unsigned int mid = (low+high)/2;
            if(mid == x/mid){
                return mid;
            }else if(mid > x/mid){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low-1;
    }
};