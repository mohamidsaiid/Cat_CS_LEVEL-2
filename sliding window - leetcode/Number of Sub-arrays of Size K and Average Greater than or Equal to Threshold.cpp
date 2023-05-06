class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int c = 0;
        int sum = accumulate(arr.begin(), arr.begin()+k,0);
        if (sum/k >= threshold) c++; 
        int n = arr.size();
        //int s = n - k + 1;
        int start = 0;
        int end = k;
        while (end < n)
        {
            sum = sum + arr[end < n? end : end - 1] - arr[start++];
            end++;
            if (sum/k >= threshold) c++; 
        }
        return c;
    }
};
