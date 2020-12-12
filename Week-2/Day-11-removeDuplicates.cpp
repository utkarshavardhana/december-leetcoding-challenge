class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)    return 0;
        int count = 1;
        int j = 1;
        for(int i=1; i<nums.size(); i++) {
            if(count < 2) {
                if(nums[i] == nums[i-1]) {
                    count++;
                } else {
                    count = 1;
                }
                nums[j] = nums[i];
                j++;
            } else {
                if(nums[i] == nums[i-1]) {
                    count++;
                } else {
                    nums[j] = nums[i];
                    j++;
                    count = 1;
                }
            }
        }
        return j;
    }
};
