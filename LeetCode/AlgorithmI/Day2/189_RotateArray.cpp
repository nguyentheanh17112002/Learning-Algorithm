// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int length = nums.size();
//         k = k%length;
//         if(k == 0){
//             return ;
//         }
//         int temp[k];
//         for(int i = 0; i < k; i++){
//             temp[k - 1 - i] = nums[length - 1 - i];
//         }
//         for(int i = length - 1 ; i >=k ; i--){
//             nums[i] = nums[i - k];
//         }
//         for (int i = 0 ; i < k ; i++){
//             nums[i] = temp[i];
//         }
//     }
// };

#include<bits/stdc++.h>

using namespace std;

void reverse(vector<int>& nums, int start, int end){
        while(start < end){
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        reverse(nums, 0 , len - 1 );
        reverse(nums, 0 , k - 1);
        reverse(nums, k , len - 1);
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    rotate(nums, 3);
    for(int i = 0 ; i < 7 ; i++){
        cout << nums[i];
    }
}