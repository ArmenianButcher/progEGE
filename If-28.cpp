#include<iostream>
#include<cmath>
using namespace std;

int f(int x) {
	if(abs(x)>2) {
		return -2*x;
	} else  {
		return 3*x;
	}
}

int main() {
  int x;
  cin >> x;
  cout << f(x) << endl;
}
