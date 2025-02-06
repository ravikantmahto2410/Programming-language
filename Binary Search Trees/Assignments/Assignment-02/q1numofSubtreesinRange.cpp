#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int key){
        val = key;
        left = right = NULL;
    }
};

void displayTree(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    displayTree(root->left);
    
    displayTree(root->right);
}
bool countSubTrees(Node* root, int low, int high, int &count){
    if(!root) return true;

    bool leftCall = countSubTrees(root->left, low ,high, count);
    bool rightCall = countSubTrees(root->right, low, high, count);
    if(leftCall && rightCall && (root->val >= low and root->val <= high)){
        count++;
        return true;
    }
    return false;
}
int main(){
    Node* root = new Node(40);
    root->left = new Node(25);
    root->right = new Node(50);
    root->left->left = new Node(20);
    root->left->right = new Node(30);
    root->right->left = new Node(45);
    root->right->right = new Node(60);

    int count = 0;
    countSubTrees(root, 15, 42, count);
    cout<<count;

    return 0;

}

