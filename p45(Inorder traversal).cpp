class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderRecursive(root, result);
        return result;
    }

private:
    void inorderRecursive(TreeNode* root, vector<int>& result) {
        if (root == nullptr) {
            return;
        }

        // Recursively traverse the left subtree
        inorderRecursive(root->left, result);

        // Add the current root value to the result vector
        result.push_back(root->val);

        // Recursively traverse the right subtree
        inorderRecursive(root->right, result);
    }
};