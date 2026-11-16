
class Solution {
public:

    int maxDepth(TreeNode* root) {
    if(root==  NULL){
        return 0;
    }
    
    int leftD = maxDepth( root->left);
    int rightD = maxDepth(root->right);

    return max(leftD,rightD)+1;
    }
};