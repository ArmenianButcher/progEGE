#include<iostream>
#include<vector>
using namespace std;



int main() {
	int A,B;
	cin >> A >> B;
	const int multiply = A;
	for(int i = 0; i<B-1;i++) {
		A*=multiply;
	}
	cout << A << endl;
	return 0;
}
