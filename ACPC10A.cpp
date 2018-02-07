#include <iostream>

using namespace std;

int main(){

	float a1,a2,a3,num;

	cin>>a1>>a2>>a3;

	while((a1!=0) || (a2!=0) || (a3!=0)){

	
		if((a3-a2)==(a2-a1)){

			cout << "AP ";
			num = a3 + (a3-a2);
			cout << num << endl;
		}
		if((a3/a2)==(a2/a1)){

			cout << "GP ";
			num = a3 * (a3/a2);
			cout << num << endl;
		}

		cin>>a1>>a2>>a3;
	}
}