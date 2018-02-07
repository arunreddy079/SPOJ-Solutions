#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double a,b;
	cin>>a>>b;

	while(a!=-1 && b!=-1){

		double result;

		if(a==b){

			if(a==0 && b==0){

				result = 0;
			}else{

				result = 1;
			}
		}else if(a>b){

			result = (a/(b+1));
		}else{

			result = (b/(a+1));
		}

		cout << ceil(result) << endl;

		cin>>a>>b;
	}
}