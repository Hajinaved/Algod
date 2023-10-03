#include <iostream>

// Define a basic structure for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to perform a postorder traversal of the binary tree
void postorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    // Traverse the left subtree
    postorderTraversal(root->left);

    // Traverse the right subtree
    postorderTraversal(root->right);

    // Visit the current node
    std::cout << root->val << " ";
}

int main() {
    // Create a binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    std::cout << "Postorder traversal of the binary tree: ";
    postorderTraversal(root);
    std::cout << std::endl;

    // Clean up memory (not shown in detail for brevity)
    // You should deallocate memory properly to avoid memory leaks.

    return 0;
}
