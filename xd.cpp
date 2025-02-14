#include <iostream>

using namespace std;

int Skibidi; //GLOBALNA

float trojkat(int a, int h){ //Argument funkcji
	return a*h/2.; //Lokalna
}


void dwucyfrowe(){

	for(int i = 10;i<=99;i++)
		cout<<i<<endl;

}

int potega3(int liczba){

	return liczba * liczba * liczba;

}


int main() {
	int pod,wys;
	cin>>pod>>wys;//Lokalna
	cout<<trojkat(pod, wys)<<endl;
	int y = 2;
	cout<<potega3(y)/5.+y*(6-5./potega3(y));
	dwucyfrowe();

}
