class Solution {
public:

    int depth(TreeNode* root) {
        int height = 0;
        while (root) {
            height++;
            root = root->left; // Move to the left child
        }
        return height;
    }

    int countNodes(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int leftDepth = depth(root->left);
        int rightDepth = depth(root->right);

        // If the depths are the same, the left subtree is a perfect binary tree
        if (leftDepth == rightDepth) {
            // 2^leftDepth - 1 nodes in the left subtree + 1 for the root
            return (1 << leftDepth) + countNodes(root->right);
        } else {
            // Right subtree is a perfect binary tree one level smaller
            return (1 << rightDepth) + countNodes(root->left);
        }
    }
};
