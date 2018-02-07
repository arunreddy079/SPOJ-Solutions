#include <iostream>
#include <stdio.h>
using namespace std ;

int main() {
	int T ;
	unsigned long long t3, t3last, sum , n , a , d ;
	cin>>T;
	while(T--) {
		cin>>t3;
		cin>>t3last;
		cin>>sum;
		n = (2 * sum) / (t3 + t3last) ;
		d = (t3last - t3) / (n - 5) ;
		a = t3 - 2 * d ;
		cout << n << endl;
		for(int i = 0 ; i < n ; i++)
			cout << a + i * d << endl;
		cout << endl;
	}
}