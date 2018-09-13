#include<iostream>
#include<vector>
#include<math.h>
using namespace std;



int main() {
	double a,b,c,x1,x2,D;
	cin >> a >> b >> c;
	D = b*b-4*a*c; 
	if(D<0) {
		cout << "No roots, sorry:(" << endl;
	}
	if(D == 0) {
		cout << (-1*b)/2*a;
	}
	if(D>0) {
		cout << ((-1*b+sqrt(D))/2*a) << " " << ((-1*b -sqrt(D))/2*a) << endl;
	}
    return 0;
}
