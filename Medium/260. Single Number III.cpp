                        //Finding the two unique numbers which appears only once

//Time complexity: O(N)
//Space complexity: O(1)
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total^=nums[i];
        }
        long long rightmostsetbit=total & (-(long long)total);
        int num1=0;
        int num2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] & rightmostsetbit){
                num1^=nums[i];
            }
            else{
                num2^=nums[i];
            }
        }
        return {num1,num2};
    }
};
