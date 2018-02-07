#include <iostream>

using namespace std;

int main(){

	unsigned long long n;

	cin >> n;

	unsigned long long b = n;

	while(b%2==0){

		
		if(b==2){

			break;
		}
		b = b/2;
	}
	
	if(n==1 || (n%2==0 && b%2==0)){

		cout << "TAK" << endl;
	}else{

		cout << "NIE" << endl;
	}

}