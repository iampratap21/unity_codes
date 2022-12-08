/*
Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.
Two binary trees are considered leaf-similar if their leaf value sequence is the same. (from left to right here)

Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar.
*/

// USING RECURSION
class Solution {
    vector<int> tree1(TreeNode* root1 , vector<int>& ans) {
        if(!root1) return ans;
        if(root1->left == NULL && root1->right == NULL) {
            ans.push_back(root1->val);
            return ans;
        }
        vector<int> a = tree1(root1->left,ans);
        vector<int> b = tree1(root1->right,ans);
        return ans;
    }
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafNodes1 , leafNodes2;
        vector<int> v1 = tree1(root1,leafNodes1);
        vector<int> v2 = tree1(root2,leafNodes2);
 
        return v1 == v2;
    }
};

// USING STACK AND DFS

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> s1,s2;
        s1.push(root1); s2.push(root2);

        while(s1.empty()==false && s2.empty()==false) {
            if(dfs(s1) != dfs(s2)) return false;
        }

        return s1.empty() && s2.empty();
    }

    int dfs(stack<TreeNode*>& s) {
        while(1) {
            TreeNode* node = s.top();
            s.pop();

            if(node->left) s.push(node->left);
            if(node->right) s.push(node->right);

            if(!node->left && !node->right) return node->val;
        }
    }
};