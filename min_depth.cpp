#include<iostream>
using namespace std;
int minDepth(Node* root){
  if(root==nullptr){
    return 0;
  }
  if(root->left==nullptr){
      return 1+ minDepth(root->right);
  }
  if(root->right==nullptr){
      return 1+ minDepth(root->left);
  }
  return 1+min(minDepth(root->right),minDepth(root->left));
