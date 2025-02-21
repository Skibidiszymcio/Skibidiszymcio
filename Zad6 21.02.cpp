#include <iostream>
using namespace std;

float kalkulator(char znak, float a, float b){

	if(znak == '+')
	return a+b;
	else if(znak == '-')
	return a-b;
	else if(znak == '*')
	return a*b;
	else if (znak == '/' && b != 0)
	return a/b;

}


main() {
	float a,b;
	char znak;
	cout << "Liczba a: ";
	cin >> a;
	cout << endl;
	cout << "Liczba b: ";
	cin >> b;
	cin >> znak;
	cout << kalkulator(znak,a,b);


}
