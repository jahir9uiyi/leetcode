class Solution {
public:

    int fun(TreeNode* root, int data)
    {
        if(root == NULL)
        {
            return 0;
        }

        int k = 0;

        if(root->val >= data)
        {
            k++;
        }

        int newData = max(data, root->val);

        k += fun(root->left, newData);
        k += fun(root->right, newData);

        return k;
    }

    int goodNodes(TreeNode* root) {
        return fun(root, INT_MIN);
    }
};