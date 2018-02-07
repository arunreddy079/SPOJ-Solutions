#include <iostream>
#include <stack>


using namespace std;

int main(){


	stack <int> str1;
	stack <int> str3;

	int n;

	cin >> n;

	while(n!=0){

		int a[n];
		int b[n];

		for (int i = 0; i < n; ++i)
		{
			b[i] = 0;
		}

		for (int i = 0; i < n; i++)
		{
			cin>>a[i];


		}
		for (int i = n-1; i >= 0; i--)
		{
			
			str1.push(a[i]);
		}

		// 	

		int least = a[0];
		for (int i = 0; i < n; i++)
		{
			if(least > a[i]){

				least = a[i];
			}
		}

		int le = least;
		int k=0;
		while(!str1.empty() || !str3.empty()){
			
			if(str1.empty() && !str3.empty() && str3.top()!=least){

				break;
			}

			if(!str3.empty() && str3.top()==least){

				b[k] = str3.top();
				k++;
				str3.pop();
				least = least + 1;

			}else{

					if(str1.top()==least){

				
					b[k] = str1.top();
					k++;

					str1.pop();
					least = least + 1;
				}else{

					str3.push(str1.top());

					str1.pop();
			}
		}
	}
		for(int i=k;i<n;i++){

			if(str3.top()==b[k]+1){

				b[i] = str3.top();
				str3.pop();
			}

		}

		int count = 0;

		for (int i = 0; i < n; i++)
		{
			if(b[i]==(le+i)){

				count++;
			}
		}

		if(count==n){

			cout << "yes" << endl;
		}else{

			cout << "no" << endl;
		}
		

		cin>>n;
	}

}
