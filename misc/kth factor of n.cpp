class Solution {
public:
    int kthFactor(int n, int k) {
        int p = 0;
        int ans = -1;
        for(int i = 1 ; i <= n ; i++){
            // if i is the multiple of n or not
            if(n%i == 0){
               p++;
               if(p == k){
                ans = i;
               }
            }
        }


        return ans;
    }
};
