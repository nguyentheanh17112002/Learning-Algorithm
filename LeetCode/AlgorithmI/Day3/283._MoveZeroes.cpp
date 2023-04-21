class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                count++;
            }
            else{
                nums[i-count] = nums[i];
            }
        }
        while(count > 0){
            nums[nums.size() - count] = 0;
            count --;
        }

    }
};


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, right = 0;
        // left the element with true position
        // right the pointer run in vector to move element to true position
        while(right < nums.size()){
            if(nums[right] != 0){
                swap(nums[right], nums[left]);
                left++;
            }
            right++;

        }
    }
};