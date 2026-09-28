class Solution {
public:
int maxlen=0;
void fun(TreeNode* root,int dir, int currlen)
{
    if(root==NULL) return;
    maxlen=max(maxlen,currlen);
    if(dir==0) fun(root->left,0,1);
    else fun(root->left,0,currlen+1);

    if(dir==1) fun(root->right,1,1);
    else fun(root->right,1,currlen+1);
    return;
}
    int longestZigZag(TreeNode* root) {
        fun(root,0,0);
        fun(root,1,0);
        return maxlen;
    }
};