#include<bits/stdc++.h>
using namespace std;

// My solution 
// class Node {
// public:
//     int val;
//     Node* left;
//     Node* right;

//     Node (int val){
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }

// };
// void displayTree(Node* root){
//     if (root == NULL) return ;
//     cout<<root->val<<" ";
//     displayTree(root->left);
//     displayTree(root->right);
// }

// int productTree(Node* root){
//     if(root==NULL) return 1;
//     return root->val * productTree(root->left) * productTree(root->right);
// }
// int main(){
//     Node* a = new Node(1);
//     Node* b = new Node(2);
//     Node* c = new Node(3);
//     Node* d = new Node(4);
//     Node* e = new Node(5);
//     Node* f = new Node(6);
//     Node* g = new Node(7);

//     a->left = b;
//     a->right = c;
//     // b->left = d;
//     // b->right = e;
//     // c->left = f;
//     // c->right = g;
//     displayTree(a);
//     cout<<endl;
//     cout<<productTree(a)<<endl;

// }


// ATI BANSAL MA'AM SOLUTION

#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;

    }
};
void findProduct(Node* root, long long int &product){
    if(!root) return;
    if(root->left) product *= root->left->data;
    if(root->right) product *= root->right->data;

    findProduct(root->left, product);
    findProduct(root->right , product);
}
int main(){
    Node* root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(1);
    root->left->right = new Node(1);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(2);
    root->right->right = new Node(3);
    root->right->right->left = new Node(10);
    long long int product = root->data;
    findProduct(root, product);
    cout<<" product is = "<<product<<endl;
}