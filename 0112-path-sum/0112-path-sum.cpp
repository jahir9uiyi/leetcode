class Solution {
public:
// =0;
bool ans=false;
void fun(TreeNode* root, int target,int sum)
{
    if(root==NULL) return;
    sum+=root->val;
    if(root->left==NULL && root->right==NULL)
    {
        if(sum==target)
        {
            ans=true;
            return;
        }
    }
    fun(root->left,target,sum);
    fun(root->right,target,sum);
return;
}
    bool hasPathSum(TreeNode* root, int target) {
        fun(root,target,0);
        return ans;
    }
};