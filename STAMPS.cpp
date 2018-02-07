#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int T;
	cin>>T;
	int k=1;

	while(T--){

		int stamps;

		cin>>stamps;

		int n;
		cin>>n;

		int a[n];

		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}

		sort(a,a+n);

		int sum=0,count=0;

		for (int i = n-1; i >=0; i--)
		{
			sum = sum + a[i];
			count++;
			if(sum>=stamps){

				break;
			}
			
		}

		cout << "Scenario #" << k << ":" << endl;
		if(sum>=stamps){

			cout << count << endl;
		}else{

			cout << "impossible" << endl;
		}
		cout << endl;
		k++;
	}
}