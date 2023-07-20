class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorderRecursive(root,result);
        return result;
    }
        private:
        void preorderRecursive(TreeNode* root,vector<int> &result){
           if(root == nullptr){
               return;
           }
           result.push_back(root->val);
           preorderRecursive( root->left, result);
           preorderRecursive(root->right ,result);
        }
};