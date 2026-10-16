class Solution {
public:
 vector<vector<int>> res;
 void fun(TreeNode* root, int target,vector<int>&temp,int sum)
 {
    if(root==nullptr) return;
    sum+=root->val;
    temp.push_back(root->val);
    if(root->left==nullptr && root->right==nullptr){
        if(sum==target)
        {
            res.push_back(temp);
            temp.pop_back();
            return;
        }
    }
    fun(root->left,target,temp,sum);
    fun(root->right,target,temp,sum);
    temp.pop_back();
    return ;
 }
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<int>temp;
        fun(root,target,temp,0);
        return res;
    }
};