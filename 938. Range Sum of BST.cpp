class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        return root?(root->val>=L ? (root->val<=R ? root->val : 0) : 0) + rangeSumBST(root->left,L,R)+rangeSumBST(root->right,L,R):0;
    }
};