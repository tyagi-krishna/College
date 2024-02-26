#include<iostream>
using namespace std;
#include<queue>

class TreeNode {
    public:
        int val;
        TreeNode *left;
        TreeNode *right;
};

// Depth first search
// there are three types: in_order, preorder and post order
// here root is  a node pointer and not an integer
void in_order(TreeNode* root) {
    if(root == NULL) {
        return;
    }
    in_order(root->left);
    cout << root;
    in_order(root->right);
}

void preorder(TreeNode* root) {
    if(root == NULL) {
        return;
    }
    cout << root;
    preorder(root->left);
    preorder(root->right);
}

void postorder(TreeNode* root) {
    if(root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root;
}


// Breadth first search
void BFS(TreeNode* root) {
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode *head = q.front();
        q.pop();
        if(head->right != NULL) {
            q.push(head->right);
        }
        if(head->left != NULL) {
            q.push(head->right);
        }
    }
}