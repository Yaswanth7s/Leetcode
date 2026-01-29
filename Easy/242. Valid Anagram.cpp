                            //Checking whether the given two strings are Valid Anagrams or not
//Method-1: Using HashMap
//Time complexity: O(n)
//Space complexity: O(n)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        for(char c:t){
            freq[c]--;
            if(freq[c]<0){
                return false;
            }
        }
        return true;
    }
};


//Method-2: Using Array 
//Time complexity: O(n)
//Space complexity: O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int count[26]={0};
        for(char c:s){
            count[c-'a']++;
        }
        for(char c:t){
            count[c-'a']--;
            if(count[c-'a']<0){
                return false;
            }
        }
        return true;
    }
};

