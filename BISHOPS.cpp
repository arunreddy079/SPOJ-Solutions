// By Arun reddy
#include <vector> 
#include <queue>
#include <map> 
#include <set>
#include <utility>
#include <algorithm>
#include <sstream>
#include <iostream> 
#include <iomanip> 
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <limits>
#include <cmath>
using namespace std;
 
//M lazy ;)
typedef long long ll;
typedef vector <int> vi;
typedef pair< int ,int > pii;
typedef istringstream iss;
typedef ostringstream oss;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define ln length()
#define rep(i,n) for(int i=0;i<n;i++)
#define fu(i,a,n) for(int i=a;i<=n;i++)
#define fd(i,n,a) for(int i=n;i>=a;i--)
#define all(a)  a.begin(),a.end() 
#define ESP (1e-9)
 
#define gi(n) scanf("%d",&n)
#define gl(n) cin >> n
#define pi(n) printf("%d",n)
#define pl(n) cout << n
#define ps printf(" ")
#define pn printf("\n")
#define dg(n,s); printf("%s %d",s,n)
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define lmax numeric_limits<ll>::max()
#define lmin numeric_limits<ll>::min()


int main(){

	char b[110];
	int a[110];

	while(cin>>b){

	if(b[0]==49 && strlen(b)==1){

		printf("1\n");
	}else if(b[0]==50 && strlen(b)==1){

		printf("2\n");
	}else if(b[0]==51 && strlen(b)==1){

		printf("4\n");
	}else{

	for(int i=0;i<strlen(b);i++){

		a[i] = b[i] - '0';
	}

	int sum=0,c=0;

	for(int i=strlen(b)-1;i>=0;i--){

		if(a[i]>=1){

			a[i]= a[i]- 1;
			break;
		}else{

			a[i] = 9;
		}
	}

	for(int i=strlen(b)-1;i>=0;i--){

		sum = a[i]*2;
		a[i] = sum%10 + c;
		c = sum/10;
	}

	if(c>0){

		pi(c);
	}
	for(int i=0;i<strlen(b);i++){

		pi(a[i]);
	}
	pn;
}
}

}