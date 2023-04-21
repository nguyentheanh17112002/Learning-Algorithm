#include <bits/stdc++.h>

using namespace std;

int search(vector<int>& nums, int target) {
        int nums_size = nums.size();
        int l = 0;
        int r = nums_size - 1;
        int mid = (l+r) /2;
        while(l <= r){
            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                l = mid+1;
                mid = (l+r)/2;
            }
            else{
                r = mid- 1;
                mid = (l+r)/2;
            }
        }
        return -1;
}

int main()
{
    vector<int> nums = {-1,0,3,5,9,12};
    cout << search(nums,2);
}