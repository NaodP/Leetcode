// Naod Philemon
// 01/05/2023

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
    TreeNode* target;
    TreeNode* findTarget(TreeNode* og, TreeNode* copy){
        if(!og) return nullptr;
        if(og == target) return copy;
        TreeNode* res = findTarget(og->left, copy->left);
        if(res) return res;
        return findTarget(og->right, copy->right);
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        this->target = target;
        return findTarget(original, cloned);
    }
};