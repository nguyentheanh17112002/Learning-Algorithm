vector<int> sortedSquares(vector<int>& nums) {
        int length = nums.size();
        vector<int> arr;
        int l = 0, r = length-1;
        int index = r;
        while(index >= 0){
            int left = nums[l]*nums[l];
            int right = nums[r]*nums[r];
            if(left > right){
                arr.push_back(left);
                l++;
                index--;
            }
            else{
                arr.push_back(right);
                r--;
                index--;
            }
        }
        std::reverse(arr.begin(),arr.end());
        return arr;
    }