class Solution {
public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        if (root == nullptr) {
            return;
        }
        
        // Recursively mirror the left and right subtrees
        mirror(root->left);
        mirror(root->right);
       
        // Swap the left and right children of the current node
        Node* temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
};
