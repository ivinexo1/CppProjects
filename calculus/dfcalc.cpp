#include <bits/stdc++.h>

class dfcalc {
	public:
	double steval(double x, std::function<double(double)> f, double t, double ini){
		double out = ini;
		double dx = x/t;
		for(int i = 0; i < t; i++){
			out = out + f(x+i*dx);
		}
		return out;
	}
};
