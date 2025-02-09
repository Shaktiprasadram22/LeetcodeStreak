
class Solution {

    void permut(int arr[], int n, vector<vector<int>>& ans, vector<int> temp,
                vector<bool>& visited) {
        if (temp.size() == n) // Base case: when temp has all elements
        {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                temp.push_back(arr[i]);
                permut(arr, n, ans, temp, visited);
                visited[i] = false;
                temp.pop_back();
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> visited(nums.size(), false);
        permut(nums.data(), nums.size(), ans, temp, visited);
        return ans;
    }
};