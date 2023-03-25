#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int findPosition(int N) {
        if (__builtin_popcount(N) != 1) return -1;
        return log2(N) + 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
