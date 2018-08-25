#include<iostream>
#include<vector>
using namespace std;

int Multiply(int Arr[],int len, int index) {
	vector<int> M(0);
	int m = 0;
	int flag = Arr[index];
	for(int i = index+1; i<len; i++) {
		m = flag* Arr[i];
		if(m%26 == 0) {
			M.push_back(m);
		} else {
			M.push_back(0);
		}
	}
	int max= M[0];
	for(int i = 0; i<len;i++) {
		if(M[i] > max) {
			max = M[i];
		}
	}
	return max;
}
int main() {
	int N,num;
	cin >> N;
	int A[N];
	for(int i = 0; i<N;i++) {
		cin >> A[i];
	}
	vector<int> M(0);
	for(int i = 0; i<N-1; i++) {
		num = Multiply(A,N,i);
		M.push_back(num);
	}
	int max= M[0];
	for(int i = 0; i<M.size();i++) {
		if(M[i] > max) {
			max = M[i];
		}
	} 
	cout << max << endl;
}
