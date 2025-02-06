#include <bits/stdc++.h>
using namespace std;
class Node {
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
    displayTree(root->left);
    
    displayTree(root->right);
}
void inorder(Node* root, vector<int>& ansSort){
    if(root == NULL) return;
    inorder(root->left, ansSort);
    ansSort.push_back(root->val);
    inorder(root->right,ansSort);
}
int main(){
    Node* a = new Node(20);
    Node* b = new Node(10);
    Node* c = new Node(30);
    Node* d = new Node(5);
    Node* e = new Node(14);
    Node* f = new Node(24);
    Node* g = new Node(35);
    Node* h = new Node(3);
    Node* i = new Node(8);
    Node* j = new Node(13);
    Node* k = new Node(15);
    Node* l = new Node(22);
    Node* m = new Node(25);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->left = h;
    d->right = i;
    e->left = j;
    e->right = k;
    f->left = l;
    f->right = m;

    displayTree(a);
    vector<int>ansSort;
    inorder(a,ansSort);

    int min = ansSort[0];
    int max = ansSort[ansSort.size()-1];
    cout<<" Minimum Value = "<<min<<endl;
    cout<<"Maximum Value = "<<max<<endl;

    return 0;

}

