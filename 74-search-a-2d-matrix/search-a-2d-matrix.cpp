class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int n = arr.size();
        if (n == 0) return false;
        int m = arr[0].size(); // Corrected row size extraction
        
        int low = 0;
        int high = (n * m) - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // Map the 1D index (mid) back to 2D matrix coordinates
            int row = mid / m;
            int col = mid % m;
            
            if (arr[row][col] == target) {
                return true; 
            }
            else if (arr[row][col] < target) {
                low = mid + 1; // Target is in the right half
            }
            else {
                high = mid - 1; // Target is in the left half
            }
        }
        
        return false; 
    }
};
