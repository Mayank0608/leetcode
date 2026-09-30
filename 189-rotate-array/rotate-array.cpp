class Solution {
public:
    void reverse(vector<int>& arr2, int  left, int n) {
        while(left < n){
          swap(arr2[left],arr2[n]);
          left++;
          n--;
        }
    }
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);

    }
    
};