class math {
    public:
    int intExp(double base, int expo) {
        int out = 1;
        for (int i = 1; i <= expo; i++) {
            out = out * base;
        }
        return out;
    }
};
