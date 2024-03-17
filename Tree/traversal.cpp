// Inorder 

void(vector<int>v, Node* root){
  if(root == null)return;
  v.push_back(root);
  solve(v,root->left);
  solve(v,root->right);
}
