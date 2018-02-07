#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	int x,y,T,num;

	cin>>T;

	while(T--){

		cin>>x>>y;

		if(x<y){

			cout << "No Number" << endl;
			
		}
		if((x>y) && x-y>2){

			cout << "No Number" << endl;
		}
		if((x>y) && (x-y<=2) && x%2!=0 && y%2==0){

			
			cout << "No Number" << endl;
		}
		if((x>y) && (x-y<=2) && x%2==0 && y%2!=0){

			
			cout << "No Number" << endl;
		}
		
		if((x>y) && (x-y<=2) && x%2!=0 && y%2!=0){

			num = x+y-1;
			cout << num << endl;

		}
		if((x>y) && (x-y<=2) && x%2==0 && y%2==0){

			num = x+y;
			cout << num << endl;

		}

		
		if((x==y) && x%2==0 && y%2==0){

			num = x+y;
			cout << num << endl;
		}
		if((x==y) && x%2!=0 && y%2!=0){

			num = x+y-1;
			cout << num << endl;
		}
		
	
	}
}