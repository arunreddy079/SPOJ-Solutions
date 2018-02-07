#include <iostream>

using namespace std;

int main(){


	int n,num=0;

	cin>>n;

	while(n!=0){

		num = 0;
		for(int i=0;i<n;i++){

			num = num + ((n-i)*(n-i));
		
		}

		cout << num << endl;

		cin>>n;


	}
}