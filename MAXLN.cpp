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


int main(){

	int t;
	gi(t);

	int i=1;
	while(t>0){

		double r;
		cin>>r;

		double a = r+r;

		double b = a*a;

		double c = b+0.25;

		cout << "Case " << i << ": ";
		printf("%.2lf\n",c);
		t--;
		i++;
	}
}