class Solution {
public:
void fun(TreeNode* root){
    if(root==NULL) return;
    swap(root->left,root->right);
    fun(root->left);
    fun(root->right);
    return ;
}
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        fun(root);        
        return root;
    }
};