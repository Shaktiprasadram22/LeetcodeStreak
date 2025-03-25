class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int total = INT_MAX;
        int start = 0;
        int end = 0;
        while(end < nums.size()){
            sum = sum + nums[end];
            while(sum >= target){

                total = min(total,end-start+1);
                sum = sum - nums[start++];
            }
            end++;
        }
       return total == INT_MAX? 0 : total; 
    }
};