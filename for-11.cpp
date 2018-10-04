#include<iostream>
using namespace std;

double squareOfNum(double A) {
	double result = 1;
	for(double i = 1;i<A;i++) {
		result+=(2*i+1);
	}
	return result;
}
double wOw(double A) {
	double result = A*A;
	cout << result << endl;
	for(double i = 1;i<=A;i++) {
		cout << squareOfNum(A+i) << endl;
		result+=squareOfNum(A+i);
	}
	return result;
}

int main() {
    double A;
    cin >> A;
    cout << wOw(A) << endl;
	return 0;
}
