                                          //Minimum no of days to make m Bouquets
//Time complexity: O(n log(maxDay))​
//Space complexity: O(1)
class Solution {
public:
    bool possible(vector<int>& bloomDay, int m, int k,int day){
        int n=bloomDay.size();
        int cnt=0;
        int b=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                b+=(cnt/k);
                cnt=0;
            }
        }
        b+=(cnt/k);
        return b>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>n){
            return -1;
        }
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(bloomDay,m,k,mid)){
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
