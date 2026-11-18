class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> res;
    if(root==NULL) return res;
    queue<TreeNode*>q;
    q.push(root);
    int ltr=1;
    while(!q.empty()){
        int lvl=q.size();
        vector<int>temp(lvl);
            int first=0;
            int last=lvl-1;
        while(lvl--)
        {
            TreeNode* t=q.front();
            q.pop();
            if(ltr==1){
                temp[first]=t->val;
                first++;
            }
            else{
                temp[last]=t->val;
                last--;
            }
            if(t->left!=NULL) q.push(t->left);
            if(t->right!=NULL) q.push(t->right);
        }
        res.push_back(temp);
        ltr=1-ltr;
    }
return res;
    }
};