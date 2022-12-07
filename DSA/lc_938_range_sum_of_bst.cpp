/*
Given the root node of a binary search tree and two integers low and high,
return the sum of values of all nodes with a value in the inclusive range [low, high].
*/

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {

        if(!root || low > high) return 0;

        if(low>root->val) {
            return  rangeSumBST(root->right,low,high);
        }
        else if(high < root->val) {
            return rangeSumBST(root->left,low,high);
        }

        int smallAns = rangeSumBST(root->left,low,high);
        int smallAns1 = rangeSumBST(root->right,low,high);

        return root->val + smallAns + smallAns1;
    }
};