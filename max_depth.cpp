#include<iostream>
using namespace std;
int maxDepth(Node* root){
  if(root==nullptr){
    return 0;
  }
 int r = 1+maxDepth(root->right);
 int l = 1+maxDepth(root->left);
 return max(r,l);
} //or just return 1+max(maxDepth(root->left),maxDepth(root->right))
