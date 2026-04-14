#include <iostream>
using namespace std;

int main(){
	int n;
	double result;
	cout << " Enter factorial number:  " << endl;
	cin >> n;
	for(int i = 2; i <= n; i++){
		result *= i;
	}
	cout << result << endl;
	return 0;
}