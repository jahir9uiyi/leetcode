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
int res=INT_MAX;
int fun(TreeNode* root){
if(root==NULL) return 0;
int left=fun(root->left);
int right=fun(root->right);
int total=left+right;
if(left==0) return right+1;
if(right==0) return left+1;
res=min(left,right)+1;
return res;
}
    int minDepth(TreeNode* root) {
       
   return  fun(root);
    }
};