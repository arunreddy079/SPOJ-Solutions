#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int T;

	long long a,b,n,x;
	int c,d;

	cin>>T;

	while(T--){

		cin>>a;
		cin>>b;

		a = a%10;
		
		if(b==0){

			n = 1;
		}else{

			b = b % 4;
			if(b==0){

				b = 4;
			}
			x = pow(a,b);

			n = x%10;
		}

		cout << n << endl;

	}
}