#include<iostream>

using namespace std;

int main() {
int A[6];
int minFive = 0;
for(int i = 0; i<6; i++) {
	cin >> A[i];
}
for(int i = 0; i<6; i++) {
	if((A[i] % 5 == 0)) {
		minFive = A[i];
		break;
	}
}
for(int i = 0; i<6; i++) {
	if((A[i]%5 == 0) && (A[i] < minFive)) {
		minFive = A[i];
	}
}
for(int i = 0; i<6; i++) {
	if(A[i]%5 == 0) {
		A[i] = minFive;
	}
}
for(int i = 0; i<6; i++) {
	cout << A[i] << endl;
}
return 0;
} 
