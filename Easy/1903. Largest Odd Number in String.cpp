                                      //Finding the Largest Odd Number in String
//Time complexity: O(n)
//Space complexity: O(1)
class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        for(int i=n-1;i>=0;i--){
            int digit=num[i]-'0'; //To convert char to int
            if(digit%2==1){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};
