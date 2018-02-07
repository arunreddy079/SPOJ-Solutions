#include <iostream>

using namespace std;

int main(){

	float n;

	cin >> n;

	while(n!=0.00){

		float sum = 0;

		int count = 0;

		for (float i = 1; i < 276; i++)
		{
			sum = (float)sum + (float)(1/(i+1));

			count++;

			if(sum>=n){

				break;
			}
		}

		cout << count << " card(s)" << endl;

		cin>>n;

	}
}