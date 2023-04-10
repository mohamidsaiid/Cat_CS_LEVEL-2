class Solution {
public:
    vector<int> grayCode(int n) {
        int t = 1 << n;
        vector<int> f;
        int x = 0;
        for (int i = 0; i < t; i++)
        {
            x ^= (i & -i);
            f.push_back(x);
        }
        return f;
    }
};
