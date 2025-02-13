#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

main () {
	int xy;
	int x;
	float z;
	int i=1;
	float y;
	
	srand(time(NULL));
	cout<<"Rzut kostka 2 razy"<<endl;
	// Zad 1 a
	while(i<=2){
		x=rand()%6+1;
		cout<<x<<endl;
		i++;
	}
	// Zad 1 b
	cout<<"Przedzial rzeczywistych liczb <0,2>"<<endl;
	y = (rand() / (float)RAND_MAX) * 2.0;	
	cout<<y<<endl;	
	// Zad 1 c
	cout<<"Przedzial rzeczywistych liczb <5,30>"<<endl;
	z = (rand() / (float)RAND_MAX) * (30-5)+5;	
	cout<<z<<endl;	
}
