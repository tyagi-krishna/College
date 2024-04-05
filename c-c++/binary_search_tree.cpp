#include <iostream>
#include<queue>
using namespace std;

class Node {
    public:
        Node *left = NULL;
        Node *right = NULL;
        int val = 0;
};

class BST {
    public:
        Node *root = NULL;
        void addNode(int val);
        void traverse();
        bool search(int val);
};

int main() {
    BST bst;
    bst.addNode(2);
    bst.addNode(3);
    bst.addNode(1);
    bst.traverse();
    cout<<"Search Result for 3 are "<<bst.search(3)<<endl;
    cout<<"Search Result for 4 are "<<bst.search(4)<<endl;
    return 0;
}

bool BST::search(int val) {
    Node* temp = root;
    while (temp)
    {
        if (val == temp->val)
        {
            return true;
        }
        else if(val > temp->val) {
            temp = temp->right;
        }
        else {
            temp = temp->left;
        }
    }
    return false;
}

void BST::traverse() {
    Node *temp = root;
    queue<Node *> queue;
    if(temp!= NULL) {
        queue.push(temp);
        while(!queue.empty()) {
            cout << temp->val<<endl;
            temp = queue.front();
            queue.pop();
            if (temp->left != NULL)
            {
                queue.push(temp->left);
            }
            if(temp->right != NULL) {
                queue.push(temp->right);
            }
        }
    }
}

void BST::addNode(int val) {
    Node *temp = new Node();
    temp->val = val;
    if (root == NULL)
    {
        root = temp;
    }
    else {
        Node *node = root;
        Node *parent = root;
        while (node)
        {
            parent = node;
            if (val > node->val)
            {
                node = node->right;
            }
            else {
                node = node->left;
            }
        }
        if(val > parent->val) {
            parent->right = temp;
        }
        else {
            parent->left = temp;
        }
    }
}