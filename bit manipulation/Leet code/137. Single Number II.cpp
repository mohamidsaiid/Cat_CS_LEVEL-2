class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x = nums[0];
        int y = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            x ^= nums[i];
            if (x == 0 && nums[i] != 0)
            {
                i++;
            }
            else if (x != nums[i])
            {
                x = nums[i-1];
                break;
            }
        }
        return x;
    }
};
