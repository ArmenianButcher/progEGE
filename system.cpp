#include<iostream>
#include<vector>
#include<math.h>
using namespace std;



int main() {
	double A1,A2,B1,B2,C1,C2;
	cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
	cout << "(" << (C1*B2-C2*B1)/(A1*B2-A2*B1) <<";"<<(A1*C2-A2*C1)/(A1*B2-A2*B1)<<")" << endl;
	return 0;
}
