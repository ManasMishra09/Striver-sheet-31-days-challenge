class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postRec(root,result);
        return result;
    }
    private:
    void postRec(TreeNode* root,vector<int> &result){
        if(root == nullptr){
            return;
        }
        postRec(root->left,result);
        postRec(root->right,result);
        result.push_back(root->val);
    }
};