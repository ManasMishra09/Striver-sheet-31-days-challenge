/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (inorder.empty() || postorder.empty())
            return nullptr;

        int n = inorder.size();
        return buildTreeHelper(inorder, 0, n - 1, postorder, 0, n - 1);
    }

private:
    TreeNode* buildTreeHelper(vector<int>& inorder, int inStart, int inEnd,vector<int>& postorder, int postStart, int postEnd) {
        if (inStart > inEnd || postStart > postEnd)
            return nullptr;

        int rootValue = postorder[postEnd];
        int rootIndexInorder;

        // Find the root element's index in the inorder list
        for (int i = inStart; i <= inEnd; ++i) {
            if (inorder[i] == rootValue) {
                rootIndexInorder = i;
                break;
            }
        }

        int leftSubtreeSize = rootIndexInorder - inStart;
        int rightSubtreeSize = inEnd - rootIndexInorder;

        TreeNode* root = new TreeNode(rootValue);

        // Recursively build left and right subtrees
        root->left = buildTreeHelper(inorder, inStart, rootIndexInorder - 1, postorder, postStart, postStart + leftSubtreeSize - 1);

        root->right = buildTreeHelper(inorder, rootIndexInorder + 1, inEnd, postorder, postEnd - rightSubtreeSize, postEnd - 1);

        return root;
    }
};
