// Inorder 

void(vector<int>v, Node* root){
  if(root == null)return;

  solve(v,root->left);
  v.push_back(root);
  solve(v,root->right);
}

// Preorder
void(vector<int>v, Node* root){
  if(root == null)return;
  v.push_back(root);
  solve(v,root->left);
  solve(v,root->right);
}


// Postorder
void(vector<int>v, Node* root){
  if(root == null)return;
  
  solve(v,root->left);
  solve(v,root->right);
  v.push_back(root);
}
