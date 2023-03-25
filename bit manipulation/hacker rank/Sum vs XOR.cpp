long sumXor(long n) {
    long t = 1;
    while(n)
    {
        bool x = n&1;
        n >>= 1;
        if (!x) t *= 2;
    }
    return t;
}
