#include<bits/stdc++.h>

using namespace std ;

typedef long long int ll ;
typedef unsigned long long int ull ;
typedef unsigned long int ul ;
typedef long double ld ;

#define line cout<<'\n'
#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
#define mp make_pair
#define mod1 1000000007

#define vi vector <int>
#define vl vector <long>
#define vb vector <bool>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vs vector <string>
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,R,L) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve (int testcase)
{
	int n ;
	cin >> n ;
	
	// SIEVE algorithm : 
	vb prime (1000001 , true) ;
	prime[0] = prime[1] = false ;
	for (int i = 2 ; i*i <= n ; i++)
	{
		if (prime[i])
		{
			for (int j = i*i ; j <= n ; j += i)
			    prime[j] = false ;
		}
	}
	Fi (i , 4 , n)
	{
		if (!prime[i] && !prime[n-i])
		{
			cout << i << ' ' << n-i ;
			R ;
		}
	}
}

int main()
{
	fast 
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	   solve (1) ;
	return 0 ;
}
