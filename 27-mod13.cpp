#include<iostream>
#include<vector>
using namespace std;

int couple(int A[], int N, int index) {

	int flag = A[index];
	int mul = 0;
	int num = 0;
	for(int i = index+1; i<N;i++) {
		mul = flag*A[i];
		if((mul%13==0)&&((i-index)>=5)) {
			num+=1;
		}
	}
	return num;
}

int main() {
	int N, sum = 0;
	cin >> N;
	int A[N];
	for(int i = 0; i<N; i++) {
		cin >> A[i];
	}
	
	for(int i = 0; i<N; i++) {
		sum+=couple(A,N,i);
	}
	cout << sum << endl;
	return 0;

}
