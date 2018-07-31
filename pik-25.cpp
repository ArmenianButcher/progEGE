#include<iostream>

using namespace std;

int main() {
int A[2015];
int pik = 0;
for(int i = 0; i<10;i++) {
	cin >> A[i];
}
for(int i = 1; i<=8;i++) {
	 if(((A[i] > A[i-1]) && (A[i] > A[i+1])) && A[i] > pik) {
     pik = A[i];
	}
}

cout << pik << endl;

} 
