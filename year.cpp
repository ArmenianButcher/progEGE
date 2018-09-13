#include<iostream>
#include<vector>
#include<math.h>
using namespace std;



int main() {
	int x;
	cin >> x;
	if(x%4!= 0) {
		cout << 365 << endl;
	} else {
		if(x%100 == 0 && x%400!=0) {
			cout << 365 << endl;
		} else {
			cout << 366 << endl;
		}
	}
	return 0;
}
