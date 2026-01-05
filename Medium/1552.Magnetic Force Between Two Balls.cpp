                                        //Maximum possible Minimum magnetic force between two magnets
//Time complexity: O(nlogn+nlog(max−min))​
//Space complexity: O(1)
class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=0;
        int high=position[position.size()-1]-position[0];
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int cnt=1;
            int last=position[0];
            for(int i=1;i<position.size();i++){
                if(position[i]-last>=mid){
                    cnt++;
                    last=position[i];
                }
            }
            if(cnt>=m){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
