Subset Sums


void solve(int index , int sum , vector<int>arr , int n , vector<int>v{

  if(index == n){
  v.push_back(sum);
    return;
  }
   solve(index+1,sum+arr[index],arr,n,v);
   solve(index+1,sum,arr,n,v);

}

 vector < int > subsetSums(vector < int > arr, int n){
  vector<int>v;
  solve(0,0,arr,n,v);
   return v;
}

