#include<iostream>
using namespace std;

int squareOfNum(int A) {
	int result = 1;
	cout << 1 << endl;
	for(int i = 1;i<A;i++) {
		cout << (2*i+1) << endl;
		result+=(2*i+1);
	}
	return result;
}

int main() {
    int A;
    cin >> A;
    cout << squareOfNum(A) << endl;
	return 0;
}
