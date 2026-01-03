                                  //Finding the Least Capcity to ship packages within D days
//Time complexity: O(n log(sum-max))
//Space complexity: O(1)
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            high+=weights[i];
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int Reqdays=1;
            int load=0;
            for(int i=0;i<n;i++){
                if(load+weights[i]>mid){
                    Reqdays++;
                    load=weights[i];
                }
                else{
                    load+=weights[i];
                }
            }
            if(Reqdays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
