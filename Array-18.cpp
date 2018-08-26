#include<iostream>
#include<vector>
using namespace std;



int main() {
	int A[10];
	for(int i = 0;i<10;i++) {
		cin >> A[i];
	}
	int flag = A[9];
	bool found = false;
	int res = 0;
	for(int i = 0;i<10;i++){
		if(A[i]<flag) {
			found = true;
			res = A[i];
			break;
		}
	}
	if(found = false) {
		cout << 0 << endl;
	} else cout << res << endl;

}
