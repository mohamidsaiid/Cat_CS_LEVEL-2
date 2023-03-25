int maximizingXor(int l, int r) {
    int x = l ^ r;
    int c = 0;
    while(x)
    {
        c++;
        x >>= 1;
    }
    return ((1<<c) - 1);
}
