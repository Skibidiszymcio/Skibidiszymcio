#include <iostream>

using namespace std;

int wynik;

int suma(short x) {
	int wynik;
    for(int i = 1; i <= x; i++)
        wynik += i;
    return wynik;
}

long long silnia(int a){
	long long wynik2=1;
	for(int i=1;i<=a;i++){
		wynik2*=i;
	}
	return wynik2;
}


int potega(int podstawa, int wykladnik){
	wynik=1;
	for(int i = 1 ; i<=wykladnik ; i++)
		wynik *= podstawa;
	return wynik;
}

	bool czy_pierw(int x){

		if (x<2)
			return false;
		for(int i=2; i*i<=x; i++)
			if(x%i == 0)
			return false;
	return true;

	}

void dzielniki(int x){
	for(int i =1 ; i<=x;i++)
		if(x%i==0)
		cout<< i << " ";
}

void sumadzielniki(int x){
	for(int i =1 ; i<=x;i++)
		if(x%i==0){

		i+=i;
		cout<<i<<endl;
	}
}

int main() {
    cout << "Suma to: "<<suma(5)<<endl;
	cout << "Silnia to: " <<silnia(65)<<endl;
	cout << "Potega to: " <<potega(3,3)<<endl;
	cout << "Czy jest to pierwsza liczba: " <<czy_pierw(20)<<endl;
	dzielniki(36);
	sumadzielniki(36);
}

