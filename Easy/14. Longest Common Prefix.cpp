                                        //Finding the Longest Common Prefix

//Method-1: Using Vertical Scanning
//Time complexity: O(N × M) where N = No of strings and M = Length of shortest string 
//Space complexity: O(1) 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return ""; 
        }
        string base=strs[0];
        string result="";
        for(int i=0;i<base.length();i++){
            for(int j=1;j<strs.size();j++){
                if(i==strs[j].length() || strs[j][i]!=base[i]){
                    return result;
                }
            }
            result+=base[i];
        }
        return result;
    }
};


//Method-2: Horizontal Scanning
//Time complexity: O(N × M) where N = No of strings and M = Length of shortest string 
//Space complexity: O(1) 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++){
            while(strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if(prefix.empty()) return "";
            }
        }
        return prefix;
    }
};
