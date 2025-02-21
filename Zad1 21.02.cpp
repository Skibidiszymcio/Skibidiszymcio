#include <iostream>

using namespace std;

string czy_kwadrat(int a, int b){

	if(a==b)
	return "To jest kfadrat";
	else
	return "To jest prostokot";

}


int pole(int a, int b){

	return a*b;

}

int obwod(int a, int b){

	return a*2+b*2;
}
int main() {

	int a,b;

		cin >> a;
		cin >> b;
		cout << "Kwadrat czy prostokat: ";
		cout << czy_kwadrat(a, b)<<endl;
		cout << "Pole to : ";
		cout << pole(a, b)<<endl;
		cout << "Obwod to : ";
		cout << obwod(a, b);
	


}
