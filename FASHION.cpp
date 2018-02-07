	#include <iostream>

using namespace std;

int main(){

	int n,T,a[1000],b[1000];

	cin>>T;
	int sum=0;
	int temp=0;

	while(T--){

		cin>>n;
		sum =0;

		for(int i=0;i<n;i++){

			cin>>a[i];
		}
		for(int i=0;i<n;i++){

			cin>>b[i];
		}

		for(int i=0; i<(n-1); i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
    
		for(int i=0; i<(n-1); i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
    
    
		for(int i=0;i<n;i++){

			sum = sum + (a[i]*b[i]);
		}

		cout << sum << endl;


	}
}