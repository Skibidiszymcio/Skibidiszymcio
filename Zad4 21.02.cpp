#include <iostream>
using namespace std;

int funkcja(int x){

	if(x < 0)
	return 6;
	else if(x<=1)
	return -3*x+6;
	else
	return 3;

}

main() {
	int x;
	cin >> x;
	cout << funkcja(x);

}
