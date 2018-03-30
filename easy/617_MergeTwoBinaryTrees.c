/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    struct TreeNode *Node;
    
    if(t1 == NULL && t2 == NULL){
        return NULL;
    }
    else{
        Node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
        Node->val = (t1?t1->val:0) + (t2?t2->val:0);
        Node->left = mergeTrees((t1?t1->left:NULL),(t2?t2->left:NULL));
        Node->right = mergeTrees((t1?t1->right:NULL),(t2?t2->right:NULL));
    }
    
    return Node;
}