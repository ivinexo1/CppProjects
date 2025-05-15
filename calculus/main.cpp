#include <iostream>
#include <cmath>
#include "operator.cpp"
#include "vector.cpp"
#include "func.cpp"
#include "func2.cpp"
#include "funcxy.cpp"
#include "dfcalc.cpp"

int main(){
	vector Vector;
	dfcalc Dfcalc;
	double a[3] = {5,1,3};
	double b[3] = {7,1,2};
	double c[3];
	Vector.cross(a, b, c);
	for(int i = 0; i < 3; i++){
		std::cout << c[i] << "\n";
	}
	ope Ope;
	std::cout << Ope.dinteg(0, 1, &func2, &func, &funcxy, 10000) << std::endl;
	return 0;
}
