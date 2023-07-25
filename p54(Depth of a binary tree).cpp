class Solution {
public:
    int maxDepth(TreeNode* root) {
        int ans=0;
        if(root == NULL){
            return ans;
        }
        return 1 + max(maxDepth(root -> left) ,maxDepth( root-> right));
    }
};