                                            //Finding the Minimum of Largest sum of the split
//Time Complexity: O(n log(sum-max))
//Space Complexity: O(1)
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=0;
        for(int i=0;i<n;i++){
            high+=nums[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int splits=1;
            int sum=0;
            for(int i=0;i<n;i++){
                if(sum+nums[i]<=mid){
                    sum+=nums[i];
                }
                else{
                    splits++;
                    sum=nums[i];
                }
            }
            if(splits>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
