#include <iostream>
using namespace std;

int main() {
	
	int i=0,a,num1,num2,num3;
	int rev1=0,rev2=0,rev3=0,rem;
	
	cin>>a;
	
	while(i<a){
		
		cin>>num1;
		
		while(num1!=0)
		{
			rem=num1%10;
			rev1=rev1*10+rem;
			num1=num1/10;
		}
		cin>>num2;
		
		while(num2!=0)
		{
			rem=num2%10;
			rev2=rev2*10+rem;
			num2=num2/10;
		}
		
		num3 = rev1 + rev2;
		
		while(num3!=0)
		{
			rem=num3%10;
			rev3=rev3*10+rem;
			num3=num3/10;
		}
		
		cout<< rev3 << endl;
		rev1=0;
		rev2=0;
		rev3=0;
		i++;
	}

	return 0;
}