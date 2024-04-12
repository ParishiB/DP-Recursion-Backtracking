class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int, int>> pq;

        int n = nums.size();
        int i = 0, j = 0;

        while (j - i + 1 < k) {
            pq.push({nums[j], j});
            j++;
        }
      
        while (j < n) {
            pq.push({nums[j], j});
            ans.push_back(pq.top().first);
            while (pq.top().second <= j - k) {
                pq.pop();
            }
            i++;
            j++;
        }

    
  

        return ans;
    }
};
