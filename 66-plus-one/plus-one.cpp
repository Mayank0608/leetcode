class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // method 1 correct one 
        int carry = 1;
        vector<int> arr={};
        for(int i = digits.size()-1; i>=0; i--){
            int sum = carry + digits[i];
            if( sum > 9 ){
                carry = 1;
                arr.push_back(0);
            }else{
                arr.push_back(sum);
                carry = 0;
            }
        }
        if(carry == 1){
            arr.push_back(carry);
        }
        reverse(arr.begin(), arr.end());
        // int num = 0;
        // int n = digits.size();
        // for(int i=0; i<n; i++){
        //     if(i == n-1){
        //        num = num + (digits[i] + 1);
        //     }else{
        //         num = (num + digits[i])*10;
        //     }
        // }
        // for(int i=n-1; i>=0; i--){
        //     digits[i] = num %10;
        //     num = num / 10;
        //     if(i == 0 && num > 0) {
        //         digits.insert(digits.begin(), num);
        //     }
        // }
        // return digits;
        return arr;
    }
    
};


// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int num = 0;
//         int n = digits.size();
//         for(int i=0; i<n; i++){
//             if(i == n-1){
//                num = num + (digits[i] + 1);
//             }else{
//                 num = (num + digits[i])*10;
//             }
//         }
//         for(int i=n-1; i>=0; i--){
//             digits[i] = num %10;
//             num = num / 10;
//             if(i == 0 && num > 0) {
//                 digits.insert(digits.begin(), num);
//             }
//         }
//         return digits;
//     }
// };