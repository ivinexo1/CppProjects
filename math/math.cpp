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
    double doSqrt(double x, int y){
        double out = (1 + x/1)/2;
        for(int i = 0; i <= y; i++){
            out = (out + (x / out)) / 2;
        }

        return out;
    }
    int intCube(int x) {
        int i = 1;
        if( x > 0) {
            while(i * i * i <= x) {
                i++;
            }
            return i--;
        } else {
            while((i * i * i) >= x) {
                i--;
            }
            return i++;
        }

    }
    double doCube(double x, int y) {
        double out = ((x / 1) + 2) / 3;

        for(int i = 1; i <= y; i++){
            out = ((x / (out * out)) + (2 * out)) / 3;
        }
        return out;
    }
    double doForth(int x){
        double out = 1;
        for(int i = 1; i <= 1000000; i++) {
            out = ((x /(out * out * out)) / (3 * x)) / 3;
        }
        return out;
    }

};
