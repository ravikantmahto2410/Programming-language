#include<bits/stdc++.h>
using namespace std;
class Node{   // This is a TreeNode
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->right);
    displayTree(root->left);
    
}
int sumTree(Node* root){
    if(root==NULL) return 0;
    return root->val + sumTree(root->left) + sumTree(root->right);
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int maxNode(Node* root){
    if(root == NULL) return INT_MIN;
    int leftMax = maxNode(root->left);
    int rightMax = maxNode(root->right);
    return max(root->val,max(leftMax,rightMax));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(15);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout<<endl;
    cout<<sumTree(a)<<endl;
    cout<<size(a)<<endl;
    cout<<maxNode(a)<<endl;
    
}