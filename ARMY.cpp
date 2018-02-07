#include <iostream>

using namespace std;

int main(){


	int T;
	cin>>T;

	while(T--){

		int ng,nmg;

		cin>>ng>>nmg;

		int g[ng],mg[nmg];

		for(int i=0;i<ng;i++){

			cin>>g[i];
		}
		for(int i=0;i<nmg;i++){

			cin>>mg[i];
		}

		int gr1 = g[0];
		int gr2 = mg[0];
		for(int i=0;i<ng;i++){

			if(gr1<g[i]){

				gr1 = g[i];
			}
		}
		for(int i=0;i<nmg;i++){

			if(gr2<mg[i]){

				gr2 = mg[i];
			}
		}

		if(gr1>=gr2){

			cout << "Godzilla" << endl;
		}else{

			cout << "MechaGodzilla" << endl;
		}
	}
}