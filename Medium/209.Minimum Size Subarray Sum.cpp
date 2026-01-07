                              //Finding the Minimum size Subarray Sum
//Time complexity: O(n)
//Space complexity: O(1)
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int n=nums.size();
        int sum=0;
        int length=n+1;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>=target){
                length=min(length,right-left+1);
                sum-=nums[left];
                left++;
            }
        }
        if(length==n+1){
            return 0;
        }
        return length;
    }
};
