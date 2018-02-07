#include <iostream>

using namespace std;

int main(){

	int n;
	cin>>n;

	while(n!=0){

		int a[n],b[n];

		int j=0,k=0;


		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			b[i] = 0;
		}

		for (int i = 0; i < n; i++)
		{
			j = i+1;

			for (int x = 0; x < n; x++)
			{
				if(a[x]==j){

					k = x+1;
					break;
				}
			}
			b[i] = k;
		}

		int count=0;

		for (int i = 0; i < n; ++i)
		{
			if(a[i]==b[i]){
				count++;
			}
		}

		if(count==n){

			cout << "ambiguous" << endl;
		}else{

			cout << "not ambiguous" << endl;
		}
		cin >> n;
	}
} 	