#include<iostream>
using namespace std;



int main() {
    double N, sum = 0.0;
    cin >> N;
    for(double i = 1.0; i<=N; i++) {
    	cout << 1.0/i << endl;
    	sum+=(1.0/i);
    }
    cout << sum << endl;
	return 0;
}
