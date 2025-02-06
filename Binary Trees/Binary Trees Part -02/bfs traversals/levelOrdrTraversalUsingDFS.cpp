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
void preorder(Node* root){
    if(root == NULL) return;// base case
    cout<<root->val<<" "; // Work 
    preorder(root->left); // call 2
    preorder(root->right); // call 1
     
}

void inorder(Node* root){
    if(root == NULL) return;// base case
    inorder(root->left); // call 2
    cout<<root->val<<" "; // Work 
    inorder(root->right); // call 1
    
    
}
void postorder(Node* root){
    if(root == NULL) return;// base case
    postorder(root->left); // call 2
    postorder(root->right); // call 1
    cout<<root->val<<" "; // Work 
    
    
}
void nthLevel(Node* root, int curr, int level){
    if(root == NULL) return;// base case
    if(curr==level) cout<<root->val<<" "; // Work 
    nthLevel(root->left,curr+1,level); // call 2
    nthLevel(root->right,curr+1,level); // call 1
     
}

int main(){
    Node* a = new Node(1);// root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    
    //Level Order Traversal
    nthLevel(a,1,1);
    nthLevel(a,1,2);
    nthLevel(a,1,3);
    

}