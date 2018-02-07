#include <iostream>

using namespace std;


int main(){

	int T;

	cin>>T;

	while(T--){

		long long n;

		cin>>n;

		long long result;

		result = n*(n+1) + ((n*(n-1))/2);

		long long res = result%1000007;

		cout << res << endl;
	}
}