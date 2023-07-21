class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        recursion(root,0,result);
        return result;
    }
    public:
    void recursion(TreeNode* root, int level, vector<int> &result){
        if(root == NULL){
            return;
        }
        if(result.size() == level)
        result.push_back(root->val);
        recursion(root->right,level+1,result);
        recursion(root->left,level+1,result);
    }
};