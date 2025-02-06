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

Node* construct(int arr[], int n){
    queue<Node*>q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;
    int j = 2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l = new Node(arr[i]);
        else l = NULL;
        if(j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
void nthLevel(Node* root, int curr, int level){
    if(root==NULL) return; // Base Case
    if(curr==level) {
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left, curr+1, level); //left
    nthLevel(root->right, curr+1, level);
}
void  levelOrder(Node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);
        cout<<endl;
    }
}

void horLevel(Node* root,int& minLevel,int &maxLevel, int level){
    if(root==NULL) return;
    minLevel = min(minLevel,level);
    maxLevel = max(maxLevel,level);
    horLevel(root->left, minLevel,maxLevel, level-1);
    horLevel(root->right, minLevel,maxLevel, level+1);
}
void topview(vector<int>& top, Node* root, int level){
    if(root==NULL) return; // base case
    if(top[level] == INT_MIN) top[level] = root->val;
    topview(top,root->left,level-1);
    topview(top,root->right,level+1);
}
int main(){
    // Construct 
    int arr[] = {1,2,3,4,5,INT_MIN,6,INT_MIN,9,INT_MIN,INT_MIN,7,INT_MIN,INT_MIN,INT_MIN,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = construct(arr,n);
    int minLevel = 0; // this is minHorizontal level jo ki left most hai i.e -2 in this case 
    int maxLevel = 0; // this is maxHorizontal level jo ki right most hai 
    horLevel(root,minLevel,maxLevel,0);
    int horlevels = maxLevel - minLevel + 1;
    vector<int>top(horlevels, INT_MIN);
    topview(top,root,-minLevel);
    for(int i=0;i<top.size();i++){
        cout<<top[i]<<" ";
    }
    
}
