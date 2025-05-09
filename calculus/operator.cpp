#include <iostream>
#include <bits/stdc++.h>

class ope {
	public:
	double deriv(double x, double t, std::function<double(double)> f){
		double d = 1/t;
		double out = (f(x+d)-f(x))/d;
		return out;
	}
	double integ(double a, double b, double t, std::function<double(double)> f){
		double d = (b-a)/t;
		double out = 0;
		for(int i = 0; i <=t; i++){
			out = out +  2*f(a + (i*d));
		}
		out = d*(out + f(a) + f(b))/2;
		return out;
	}
	double pderiv(double x, double y, std::function<double(double,double)> f, double t){
		double d = 1/t;
		double out = (f(x+d,y)-f(x,y))/d;
		return out;
	}
	double dinteg(double a, double b, std::function<double(double)> c, std::function<double(double)> l, std::function<double(double,double)> f, double t) {
		double dx = (b-a)/t;
		double out = 0;
		double dy;
		for(int i = 0; i < 100; i++){ std::cout << "-";}
		std::cout << "|" << std::endl;
		for(int i = 0; i <= t; i++){
			dy = (l(a+(i*dx)) - c(a+(i*dx)))/t;
			for(int j = 0; j < t; j++){
				out = out + f(a+(i*dx), c(a+(i*dx)) + (j*dy))*dy*dx;
			}
			if(i%int(t/100) == 10){
				std::cout << "#" << std::flush;
			}
		}
		std::cout << std::endl;
		return out;
	}
};
