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
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(a)  a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false)
#define io cin.tie(nullptr)

#define gi(n) scanf("%d",&n)
#define gl(n) scanf("%lld",&n)
#define pi(n) printf("%d",n)
#define pl(n) printf("%lld",n)
#define ps printf(" ")
#define pn printf("\n")


long long sum;
long long breakdown(int n){

    long long a = n/2;
    long long b = n/3;
    long long c = n/4;

    sum = sum + (a+b+c);
    if(sum==n){
        return sum;
    }

    if(a>=12){
        breakdown(a);
        sum = sum - a;
    }
    if(b>=12){
        breakdown(b);
        sum = sum - b;
    }
    if(c>=12){

        breakdown(c);
        sum = sum - c;
    }
    return sum;

}

int main(){

    long long n;
    while(cin>>n){
        sum = 0;

        if(n>=12){
            long long ans = breakdown(n);
            cout << ans << endl;
        }else{
            cout << n << endl;
        }
    }
}
