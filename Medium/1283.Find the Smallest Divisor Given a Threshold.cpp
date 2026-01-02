                            //Finding the smallest divisor given a threshold
//Time complexity: O(n log max(nums))
//Space complexity: O(1)
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=*max_element(nums.begin(),nums.end());
        int low=1;
        int high=maxi;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=(nums[i]+mid-1)/mid;
            }
            if(sum<=threshold){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};

                                        //(OR)
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=(nums[i]+mid-1)/mid;
            }
            if(sum<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
