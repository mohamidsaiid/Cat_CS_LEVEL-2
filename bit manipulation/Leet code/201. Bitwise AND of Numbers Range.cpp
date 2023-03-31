class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int r = 0;
        int lens = 0;
        while(left != right){
            left >>= 1;
            right >>= 1;
            lens++;

        }
        return left << lens;
    }
};
