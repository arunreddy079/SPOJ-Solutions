#include <iostream>

using namespace std;

int main(){

	string a;

	int col,num,k=0;

	cin>>col;

	char b[200][200];

	while(col!=0){

		cin>>a;
		num = (a.length()/col);
		k=0;

	


		for(int i=0;i<num;i++){

			
			if(i%2!=0){

				for(int j=col-1;j>=0;j--){

					b[i][j]=a[k]; 
					k++;                           
				}
			}
			if(i%2==0){

				for(int j=0;j<col;j++){

					b[i][j]=a[k];
					k++;
				}
			}
		}
		for(int j=0;j<col;j++){

			for(int i=0;i<num;i++){

				cout << b[i][j];
			}
		}
		cout << endl;
		cin>>col;
	}
}