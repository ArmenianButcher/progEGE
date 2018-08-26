#include<iostream>
#include<vector>
using namespace std;



int main() {
	int N;
	cin >> N;
	int A[N];
	bool yes = false;
	int count = 0;
	for(int i = 0; i<N;i++) {
		cin >> A[i];
	}
	int difference = A[1] - A[0];
	for(int i = 2; i<=N;i++) {
		if((A[i+1]-A[i]) == difference) {
			count+=1;
		}
	} 
	if(count == 0.5*N) {
		cout << difference << endl;
	} else cout << 0 << endl;
	return 0;
}
