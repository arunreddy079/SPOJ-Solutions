#include <iostream>

using namespace std;

int main(){

	int n,k=0,b=0;
	int a[10000];
	int sum=0;
	cin>>n;

	while(n!=-1){

		sum = 0;
		k = 0;
		b = 0;
		for(int i=0;i<n;i++){

			cin>>a[i];
		}
		for(int i=0;i<n;i++){

			sum = sum + a[i];
		}

		if(sum%n!=0){

			k = -1;
		}else{

		b = sum/n;

		for(int i=0;i<n;i++){

			if(b<a[i]){

				k = k + (a[i]-b);
			}
		}
	}

		cout << k << endl;

		cin>>n;
	}
}