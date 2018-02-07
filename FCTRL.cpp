#include <iostream>
#include <cmath>


using namespace std;

int main(){

	int k,x=0,n;
	int i=1;
	
	int T;
	cin>>T;
	
	while(T--){
		cin>>n;
		i=1;
		x=0;
	while(n>=pow(5,i)){

			x = x + (n/pow(5,i));
			i++;
		
	}
	cout << x << endl;
}

	
}