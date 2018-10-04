#include<iostream>
using namespace std;

int power(int A, int N) {
	int result = A;
	for(int i = 1;i<N;i++) {
		result*=A;
	}
	return result;
}

int main() {
    int A,N;
    cin >> A >> N;
    cout << power(A,N) << endl;
	return 0;
}
