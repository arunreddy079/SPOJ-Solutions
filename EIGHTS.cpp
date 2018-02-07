#include <iostream>

using namespace std;


int main(){

	int T;

	cin >> T;

	while(T--){

		long long n;

		cin >> n;

		long long ans = (192+(250*(n-1)));

		cout << ans << endl;
	}
}