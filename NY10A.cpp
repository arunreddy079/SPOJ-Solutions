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

	while(t--){

		int n;
		gi(n);

		vi a(8);

		string s;

		cin>>s;

		rep(i,s.size() - 2){

			if(s[i]=='T' && s[i+1]=='T' && s[i+2]=='T'){

				a[0]++;
			}
			if(s[i]=='T' && s[i+1]=='T' && s[i+2]=='H'){

				a[1]++;
			}
			if(s[i]=='T' && s[i+1]=='H' && s[i+2]=='T'){

				a[2]++;
			}
			if(s[i]=='T' && s[i+1]=='H' && s[i+2]=='H'){

				a[3]++;
			}
			if(s[i]=='H' && s[i+1]=='T' && s[i+2]=='T'){

				a[4]++;
			}
			if(s[i]=='H' && s[i+1]=='T' && s[i+2]=='H'){

				a[5]++;
			}
			if(s[i]=='H' && s[i+1]=='H' && s[i+2]=='T'){

				a[6]++;
			}
			if(s[i]=='H' && s[i+1]=='H' && s[i+2]=='H'){

				a[7]++;
			}
		}

		cout << n << " ";
		rep(i,8){

			cout << a[i] << " ";
		}
		pn;

	}
}