#include <iostream>

using namespace std;

void szlaczek(char x, int y){

	for(int i = 1;i <= y;i++){
		cout<<x;

	}
}

void wieksza(int a, int b){
		if(a>b)
		cout<<a<<endl;
		else
		cout<<b<<endl;
	}

int main(){
	szlaczek('x',100);
	wieksza(5,8);
}
