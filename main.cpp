#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
bool getHeight(TreeNode* node)
{
    if(node == nullptr) return 0;
    int l_h = -1;
    int r_h = -1;
    l_h = getHeight(node->left);
    if(l_h == -1) return false;
    r_h = getHeight(node->right);
    if(r_h == -1) return false;
    if(abs(l_h - r_h) > 1) return false;
    return true;
}
bool isBalanced(TreeNode* root) {
    return getHeight(root);
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
