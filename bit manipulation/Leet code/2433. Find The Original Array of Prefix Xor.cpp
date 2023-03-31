class Solution {
public:
    vector<int> findArray(vector<int>& nums) {
        vector <int> x;
        x.push_back(nums[0]);
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int f = nums[i] ^ nums[i+1];
            x.push_back(f);
        }
        return x;
    }
};
