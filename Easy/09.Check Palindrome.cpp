//Time complexity: O(log₁₀(n))
//Space complexity: O(1)
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long reversednumber=0;
        int originalnumber=x;
        while(x!=0){
            int lastdigit=x%10;
            reversednumber=reversednumber*10+lastdigit;
            x/=10;
        }
        if(originalnumber==reversednumber){
            return true;
        }
        else{
            return false;
        }
    }
};
