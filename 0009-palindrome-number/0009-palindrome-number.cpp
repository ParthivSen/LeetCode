class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
            long int dig, num, a=0;
            num = x;
            do{
                dig = x % 10;
                a = (a * 10) + dig;
                x = x / 10;  
            }while(x!=0);
            if(num==a){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }
};