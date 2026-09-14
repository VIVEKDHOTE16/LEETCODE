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
    int leftHeight(TreeNode* root){
        int h=0;
        while(root){
            h++;
            root=root->left;
        }
        return h;
    }
    int rightHeight(TreeNode* root) {
        int h = 0;

        while (root) {
            h++;
            root = root->right;
        }

        return h;
    }
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left = leftHeight(root->left);
        int right = rightHeight(root->right);

        if(left==right){
            return (1 << (left+1))-1;
        }

        int leftcount=countNodes(root->left);
        int rightcount=countNodes(root->right);

        return leftcount+rightcount+1;
    }
};