#include <iostream>
#include <cstdio>


using namespace std;

int main(){


	int T;
	cin >> T;
	cout << endl;

	while(T--){

	unsigned long long no_child;

	cin >> no_child;

	unsigned long long no_candies[no_child];

	unsigned long long sum = 0;

	for (int i = 0; i < no_child; ++i)
	{
		cin >> no_candies[i];
	}

	for (int i = 0; i < no_child; ++i)
	{
		sum = (sum + no_candies[i])%no_child;
	}

	if(sum%no_child==0){

		cout << "YES" << endl;
	}else{

		cout << "NO" << endl;
	}
}
}