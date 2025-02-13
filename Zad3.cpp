#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

main() {
	int suma_90;
	int ile_np;
	int x;
	int i;
	int maxLiczba;
	srand(time(NULL));
	
	while(i<=10){
		i++;
		x=rand()%(100-1+1)+1;
		
		cout<<x<<endl;
		
		if(x%2!=0){
			ile_np++;
		}
		
		if(x<90) {
			suma_90 += x;
		}
		 maxLiczba = max(maxLiczba, x);
	}
	
	cout<<"Najwieksza wylosowana liczba jest: "<<maxLiczba<<endl;
	cout<<"Suma liczb < 90 = "<<suma_90<<endl;
	cout<<"Tyle jest nie parzystych -> "<<ile_np<<endl;
}
