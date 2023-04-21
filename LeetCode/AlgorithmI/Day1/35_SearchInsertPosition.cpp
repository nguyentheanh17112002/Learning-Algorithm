class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r = nums.size() - 1;
        int l = 0;
        int mid = (r+l)/2;
        if(target > nums[r]){
            return r+1;
        }
        else if(target < nums[l]){
            return 0;
        }
        while(l <= r){
            if(target == nums[mid]){
                break;
            }
            else if(target > nums[mid]){
                l = mid + 1;
                mid = (l+r)/2;
            }
            else{
                r = mid -1;
                mid = (l+r)/2;
            }
        }
        if(target == nums[mid]){
            return mid;
        }
        else{
            return mid+1;
        }
    }
};