/*
Given the root of a binary tree, find the maximum value v for which there exist different nodes a and b where v = |a.val - b.val| and a is an ancestor of b.

A node a is an ancestor of b if either: any child of a is equal to b or any child of a is an ancestor of b.
*/


class Solution {
public:
    int maxAncestorDiff(TreeNode* root,int maxi = 0 ,int mini = 100000) {
       
        if(root == nullptr) return maxi-mini;
        
        maxi = max(maxi,root->val);
        mini = min(mini,root->val);

        int a = maxAncestorDiff(root->left,maxi,mini);
        int b = maxAncestorDiff(root->right,maxi,mini);

        return max(a,b);

    }
};

