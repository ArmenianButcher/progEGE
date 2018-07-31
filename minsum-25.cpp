#include<iostream>

using namespace std;

int main() {
int A[70];
int minSum = 0;
for(int i = 0; i<70; i++) {
	cin >> A[i];
}
for(int i = 0; i<70; i++) {
	if((A[i] + A[i+1])%2 == 0) {
		minSum = A[i] + A[i+1];
		break;
	}
}
for(int i = 0; i<70; i++) {
	if(((A[i]+A[i+1])%2 == 0) && (A[i]+A[i+1]) < minSum) {
		minSum = A[i] + A[i+1];
	}
}
cout << minSum << endl;

} 
