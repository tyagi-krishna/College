#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node * left = NULL;
    Node * right = NULL;
};
class BST
{
    private:
        Node *root = NULL;
    public:
        void addNode(int val);
        void deleteNode(int val);
        bool search(int val);
};

int main() {
    BST bst;
    bst.addNode(2);
    bst.addNode(3);
    bst.addNode(1);
    bst.addNode(4);
    bst.addNode(-1);
    cout<<bst.search(2)<<endl;
    cout<<bst.search(3)<<endl;
    cout<<bst.search(4)<<endl;
    bst.deleteNode(4);
    cout<<bst.search(4)<<endl;
    cout << bst.search(-12) << endl;

    return 0;
}


// Instead use a traversal function and add a search condition in the function.
bool BST::search(int val) {
    Node * head = root;
    while(head) {
        if(head->val == val) {
            return true;
        }
        else if(head->val > val) {
            head = head->left;
        }
        else {
            head = head->right;
        }
    }
    return false;
}


// for deleting a node there are 3 conditions:
// 1. if the node is a leave node.
// 2. if there is only one child node.
// 3. or if the node lies between a fully grown tree.
// thats why this delete function is not complete since it does not handle those situations
void BST::deleteNode(int val) {
    Node *head = root;
    if(root->val == val) {
        root = NULL;
    }
    while(head) {
        if (head->val == val)
        {
            free(head);
            return;
        }
        else if(head->val > val) {
            head = head->left;
        }
        else {
            head = head->right;
        }
    }
}




// this function of adding node is ok but we need to add a balancing function to balance the tree after adding more than 1 or multiple nodes.
void BST::addNode(int val)
{
    Node* temp = new Node();
    temp->val = val;
    if(root == NULL) {
        root = temp;
        return;
    }
    Node * current = root;
    Node * parent = current;
    while(current) {
        parent = current;
        if(val > current->val) {
            current = current->right;
        } 
        else {
            current = current->left;
        }
    }
    if(parent->val > val) {
        parent->left = temp;
    }
    else {
        parent->right = temp;
    }
}

