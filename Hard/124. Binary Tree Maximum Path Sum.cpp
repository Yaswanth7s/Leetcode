                            //Finding the Maximum Path Sum in a Binary Tree
//Time Complexity: O(n)
//Space Complexity: O(h) where h is the height of the tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxi=INT_MIN;
    int sum(TreeNode* root){
        if(root==nullptr) return 0;
        int left=max(0,sum(root->left));
        int right=max(0,sum(root->right));
        maxi=max(maxi,root->val+left+right);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        sum(root);
        return maxi;
    }
};
