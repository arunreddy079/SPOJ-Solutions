#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	int l;

	cin >> l;
	float result;

	while(l!=0){

		result = (l*l)/(2*3.14159);

		printf("%0.2f\n",result);

		cin>>l;
	}

}