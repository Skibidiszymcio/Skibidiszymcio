#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

main(){
	int i = 0;
	int zgad;
	int x;
	srand(time(NULL));
	x=rand()%(99-10+1)+1;
	
	while(zgad!=x){
	cout<<"Zgadnij liczbe: ";
	cin>>zgad;
	if(zgad==x){
		cout<<"Zgadles liczbe! ";
	}
	else if(zgad<x){
		cout<<"Liczba jest wieksza!"<<endl;
	}
	else if(zgad>x){
	cout<<"Liczba jest mniejsza!"<<endl;
	}
	i++;
	}
	cout<<"za "<<i<<" razem";
}
