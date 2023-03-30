class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int n = 0;
        for (int i : nums) n |= i;
        return n;
    }
};
