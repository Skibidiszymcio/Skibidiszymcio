#include <iostream>
using namespace std;


void szlaczek(char z, int n){

	for(int i = 1; i <= n; i++){
		cout << z;
	}
	cout << endl;
}


int main() {
	int n;
	char z;
	cin >> z;
	cin >> n;

	szlaczek(z, n);

}
