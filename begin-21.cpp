#include<iostream>
#include<vector>
#include<math.h>
using namespace std;



int main() {
	float x2,x1,x3,y1,y2,y3;
	cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
	double side1 = sqrt(pow(x2-x1,2.0) + pow(y2-y1,2.0));
	double side2 = sqrt(pow(x3-x2,2.0) + pow(y3-y2,2.0));
	double side3 = sqrt(pow(x1-x3,2.0) + pow(y1-y3,2.0));
	double p = (side1+side2+side3)/2.0;
	double per = side1 + side2 + side3;
	double area = sqrt(p*(p-side1)*(p-side2)*(p-side3));
	cout << "Area: " << area << "; Perimeter: " << per << endl;
    return 0;
}
