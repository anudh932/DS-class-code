#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
       Node(int n) {
        data = n;
        left = NULL;
        right = NULL;
    }
};


void insert(Node* node, int n) {

    if (n < node->data) {
        if (node->left == NULL) {
            node->left = new Node(n);
        } else {
            insert(node->left, n);
        }
    }
    else if (n > node->data) {
        if (node->right == NULL) {
            node->right = new Node(n);
        } else {
            insert(node->right, n);
        }}
        else if(n>node->data){
            if(node->right ==NULL)
            {
                node->right =new Node(n);
            }
            else {insert(node->right,n);}
        } }

void inorder(Node* root) {
    if (root == NULL)
        return;
     inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


void preorder(Node* root) {
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root) {
    if (root == NULL)
        return;
   postorder(root->left);
   postorder(root->right);
   cout << root->data << " ";
}

int main() {
    int n, x;
    Node* root = NULL;
    cout<<"Enter the number of elements to insert: ";
    cin >> n;
    cout<<"Enter the elements you want to insert: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (root == NULL) {
            root = new Node(x);
        } else {
            insert(root, x);
        }
    }
    cout << "inorder" << endl;
    inorder(root);
    cout << endl;
    cout << "preorder" << endl;
    preorder(root);
    cout << endl;
    cout << "postorder" << endl;
    postorder(root);
    cout << endl;

    return 0;
}
