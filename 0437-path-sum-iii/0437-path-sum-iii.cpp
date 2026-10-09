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
int count=0;
void fun(TreeNode* root,int target,long long sum)
{
    if(root==NULL)
    {
        return ;
    }
    sum+=root->val;
    if(sum==target)
    {
        count++;
      
    }

        fun(root->left,target,sum);

        fun(root->right,target,sum);
    
    return ;
}
    int pathSum(TreeNode* root, int target) {
         if (root == NULL) {
            return 0;
        }

       fun(root,target,0);
    
         pathSum(root->left, target);
        pathSum(root->right, target);
        return count;
    }
};