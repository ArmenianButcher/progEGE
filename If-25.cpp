#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int f(int x) {
	if(x<-2 || x>2) {
		return 2*x;
	} else {
		return -3*x;
	}
}

int main() {
	int x;
	cin >> x;
	cout << f(x) << endl;
	return 0;
}
