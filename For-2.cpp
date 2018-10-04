#include<iostream>
using namespace std;



int main() {
    int A,B;
    cin >> A >> B;
    for(int i = A; i<=B; i++) {
    	cout << i << endl;
    }
    cout << (B-A)+1 << endl;
	return 0;
}
