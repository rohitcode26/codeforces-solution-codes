#include<bits/stdc++.h>
 
using namespace std ;
 
typedef double D ;
typedef long long ll ;
typedef long double ld ;
typedef unsigned int ui ;
typedef unsigned long long ull ;
 
# define F first
# define S second
# define R return
# define C continue 
# define pb push_back 
# define pf push_front
# define mp make_pair
 
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp
 
# define vi vector <int>
# define vb vector <bool>
# define vll vector <ll>
# define vs vector <string>
 
# define vvi vector < vector < int > >
# define vvb vector < vector < bool > >
# define vvc vector < vector < char > >
# define vvll vector < vector < ll > >
# define vvd vector < vector < D > >
# define vvld vector < vector < ld > >
 
# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >
 
# define vpld vector < pld >
# define vpii vector < pii >
# define vpll vector < pll >
# define vpDD vector < pDD >
# define vvpii vector < vector < pii > >
 
# define Fi(i,L,R) for (int i = L ; i <= R ; i++)
# define Fd(i,R,L) for (int i = R ; i >= L ; i--)
# define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve ()
{
	int m , s ;
	cin >> m >> s ;
	
	if (s > 9*m || (s == 0 && m != 1))
	{
		cout << -1 << ' ' << -1 ;
		return ;
	}
	
	if (s == 0)
	{
		cout << 0 << ' ' << 0 ;
		return ;
	}
	
	string a (m , '0') , b (m , '0') ;  // intialise two strings of length = m ,  with all zeros (0) ;
	
	int clone = s ;
	Fi(i , 0 , m-2)
	{
		Fi(j , 0 , 9)
		{
			if (!(i == 0 && j ==0) && clone - j >= 0 && 9*(m - i - 1) >= clone - j)   // two stop from leading zeros && remaning sum is +ve && number of 9's added is greater than the remaining sum
			{
				a[i] = j + '0' ;
				clone -= j ;
				break ;
			}
		}
	}
	a[m-1] = clone + '0' ;
	
	clone = s ;
	Fi(i , 0 , m-2)
	{
		Fd(j , 9 , 0)
		{
			if (clone - j >= 0 && 9*(m - i - 1) >= clone - j)    // remaining sum is +ve && number of 9's added till now is greater than the remaining sum
			{
				b[i] = j + '0' ;
				clone -= j ;
				break ;
			}
		}
	}
	b[m-1] = clone + '0' ;
	
	cout << a << ' ' << b ;
}
 
int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast ;
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve () ;
	return 0 ;
}
