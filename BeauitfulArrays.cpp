#include <bits/stdc++.h>

#define pb                  push_back
#define _1                  first
#define _2                  second
#define key                 first
#define value               second

#define hashmap             unordered_map
#define hashset             unordered_set

#define sz(a)               ((int) a.size())
#define all(a)              a.begin(), a.end()
#define sgn(n)              ((n > 0) - (n < 0))


#define forup(i, a, b, s)        for(int i=a; i<=b; i+=(s))
#define fordown(i, a, b, s)      for(int i=a; i>=b; i-=(s)

#define iter(i, a, b, s)    for(int i=a; sgn(b-a)*i <= sgn(b-a)*b; i += s)

#define forEach(v, c)       for(auto v = (c).begin();  v != (c).end(); ++v)

#define checkbit(n, b)      ((n >> b) & 1)
#define setbit(n, b)        (b |= (1 << n))
#define resetbit(n, b)      (b &= ~(1 << n))

#define LEFT(i)             (2*i + 1)
#define RIGHT(i)            (2*i + 2)
#define MID(i, j)           ((i+j)/2)

#define INF                 INT_MAX
#define NINF                INT_MIN

#define CUBE(n)             [n][n][n]

#define V(n)                vector<n>
#define P(n, m)             pair<n,m>

#define MOD                 1000000007
#define MAX_SIZE            65536

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef vector<int> vi;
typedef vector<ll> vll;

typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvll;

typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef pair<double, double> pdd;

typedef set<int>::iterator sit;

void setup_env() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}



int main(){
	setup_env();
	int n,t,x;
	cin>>t;
	while(t--){
		int one=0,zero=0,minus=0,other=0;
		cin>>n;
		while(n-- && cin>>x) x==0?zero++:(x==1?one++:(x==-1?minus++:other++));
		other>1?cout<<"no\n":(minus && other?cout<<"no\n":(minus>1 && !one?cout<<"no\n":cout<<"yes\n"));
	}
}

