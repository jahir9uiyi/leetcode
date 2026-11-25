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
bool res=1;
bool fun(TreeNode* root, TreeNode* subroot)
{
  if(root == NULL || subroot == NULL) return root == subroot;

if(root->val != subroot->val) return 0;
   

    bool a=fun(root->left,subroot->left);
    bool b=fun(root->right,subroot->right);
    return a && b;
}
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
       if(root==NULL) return false;
       if( fun(root,subroot) ) return true;
       return  isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
    }
};