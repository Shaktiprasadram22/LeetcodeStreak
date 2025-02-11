class Solution {
public:
    int findTheWinner(int n, int k) {
        if (n == 1) {
            return 1; // Return 1-based index for the winner
        }
        return (findTheWinner(n - 1, k) + k - 1) % n +
               1; // Adjust for 1-based indexing
    }
};
