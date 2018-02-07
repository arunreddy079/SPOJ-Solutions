// By Arun reddy
#include <bits/stdc++.h>

using namespace std;
 
//lazy AF;)
typedef long long ll;
typedef vector <int> vi;
typedef pair< int ,int > pii;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define ln length()
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a)  a.begin(),a.end()
#define fast \
ios_base::sync_with_stdio(0); \
cin.tie(0); \
cout.tie(0)
 
#define gi(n) scanf("%d",&n)
#define gl(n) cin >> n
#define pi(n) printf("%d",n)
#define pl(n) cout << n
#define ps printf(" ")
#define pn printf("\n")

vi a;
int sum = 0;
ll n;
vi b;
int i = 1;
int x;


bool add(){

	sum = 0;
	for(auto value: a){

		sum += (value*value);
		
	}

	if(find (b.begin(), b.end(), sum)!=b.end()){

		return true;
	}

	b.pb(sum);
	n = sum;
	

	return false;
	
}

void divide(){

	a.clear();

	while(n!=0){

		a.pb(n%10);
		n = n/10;
		
	}

}


int main(){

	
	gl(n);

	divide();
	add();

	while(sum!=1){
	
		divide();
		bool va = add();

		if(va){

			i = -1;
			break;
		}
		i++;
	
	}

	cout << i << endl;


}