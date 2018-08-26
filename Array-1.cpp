#include<iostream>
#include<vector>
using namespace std;



int main() {
	int N,i=1, stop = 0;
	cin >> N;
	vector<int> vector(0);
	vector.push_back(1);
	while(true) {
		i+=2;
		stop+=1;
		if(i%2!=0) {
			vector.push_back(i);
		}
		if(stop == N-1) {
			break;
		}
	}
	for(int i = 0; i<vector.size();i++) {
		cout << vector[i] << endl;
	}
	return 0;

}
