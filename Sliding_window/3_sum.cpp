#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>solve(vector<int>arr , int n){
    int l , r;
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i < n-2; i++){
        l = i+1;
        r = n-1;
        
        while(l<r){
            if(arr[i] + arr[l] + arr[r] == sum){
                arr.push_back(i);
                arr.push_back(l);
                arr.push_back(r);
            }elsee if(arr[i] + arr[l] + arr[r] > sum){
                r--;
            }else{
                l++;
            }
        }
        
    }
    
    return false;
}
