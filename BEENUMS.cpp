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

int bee(int n){

	long t=1,i=1;
	if(n==1){

		pl("Y");pn;
		return 0;
	}
	while(1){

		t = t + 6*i;
		if(n==t){

			pl("Y");pn;
			return 0;
		}else if(n<t){

			pl("N");pn;
			return 0;
		}
		i++;
	}
	
}

int main(){

	long long n;
	cin>>n;

	while(n!=-1){

		bee(n);
		cin>>n;
	}
}