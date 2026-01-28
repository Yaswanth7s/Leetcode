                            //Finding whether the given string forms a goal string after rotations
//Time complexity: O(n)
//Space complexity: O(n)
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        return (s+s).find(goal)!=string::npos;
    }
};
