class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> arr;
        int l = 0, r = numbers.size() - 1;
        while(l < r){
            if(numbers[l] + numbers[r] > target){
                r--;
            }
            else if(numbers[l]+numbers[r] < target){
                l++;
            }
            if(numbers[l]+numbers[r] == target){
                arr.push_back(l+1);
                arr.push_back(r+1);
                break;
            }
        }
        return arr;
    }
};