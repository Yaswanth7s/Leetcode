                                //Sort characters by frequency
//Time complexity: O(n)
//Space complexity: O(n)
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char ch:s){
            freq[ch]++;
        }
        vector<string> bucket(s.length()+1);
        for(auto it:freq){
            bucket[it.second].append(it.second,it.first);
        }
        string result="";
        for(int i=bucket.size()-1;i>0;i--){
            result+=bucket[i];
        }
        return result;
    }
};
