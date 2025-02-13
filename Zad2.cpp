#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

main() {
	int x = 1;
	int i = 1;
	int j = 0;
	int ile_1 = 0;
	srand(time(NULL));
	while(i<=100){
		j++;
		i++;
		x = rand()%6+1;
		cout<<x<<endl;
		if(x == 6){
			cout<<"Za "<<j<<" razem wylosowales 6"<<endl;
		}
		else if(x == 1){
			ile_1++;
			
		}
				
	}
	cout<<"Tyle jedynek trafiles: "<<ile_1;
}
