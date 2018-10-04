#include<iostream>
using namespace std;

double wow(double A) {
	double result = 0;
	for(double i = 1.0;i<A;i++) {
		result-=(10.0+i)/10.0;
		result+=(10.0+(i+1))/10.0;
	}
	return result;
}

int main() {
    double A;
    cin >> A;
    cout << wow(A) << endl;
	return 0;
}
