46. Permutations

// solution 1

class Solution {
public:
    void solve(vector<int>& ip, vector<int>& op, vector<vector<int>>& ans) {
        if (ip.empty()) {
            ans.push_back(op);
            return;
        }

        for (int i = 0; i < ip.size(); i++) {
            vector<int> new_ip(ip); // Create a copy of ip
            vector<int> new_op(op); // Create a copy of op
            new_op.push_back(new_ip[i]);
            new_ip.erase(new_ip.begin() + i);
            solve(new_ip, new_op, ans);
        }
    }

    vector<vector<int>> permute(vector<int>& ip) {
        vector<vector<int>> ans;
        vector<int> op;
        solve(ip, op, ans);
        return ans;
    }
};




// solution 2
class Solution {
public:
    void solve(int i, vector<int>& nums,vector<vector<int>>& ans) {
        if (i == nums.size() - 1) {
            ans.push_back(nums);
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            swap(nums[j], nums[i]);
            solve(i + 1, nums, ans);
            swap(nums[j], nums[i]); // Backtrack: restore the original order
        }
    }

   vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        solve(0, nums, ans);
        return ans;
    }
};

