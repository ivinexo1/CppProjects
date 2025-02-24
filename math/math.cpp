class math {
    public:
    double intExp(double base, int expo) {
        int out = 1;
        for(int i = 1; i <= expo; i++) {
            out = out * base;
        }
        return out;
    }
    int intSqrt(int x) {
        int i = 1;

        while(i * i <= x){
            i++;
        }
        return i--;
    }
    double doSqrt(double x){
        double out = (1 + x/1)/2;
        for(int i = 0; i <= 10000000; i++){
            out = (out + (x / out)) / 2;
        }

        return out;
    }
    int intCube(int x) {
        int i = 1;
        while(i * i * i <= x) {
            i++;
        }
        return i--;

    }
    double doCube(int x) {
        double out = 1;

        for(int i = 1; i <= 100; i++){
            out = ((x / out) + (2 * out)) / 3;
        }
        return out;
    }
};
