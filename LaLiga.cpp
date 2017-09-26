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
	int t;
	cin>>t;
	map<string,int> m;
	string s;
	int j;
	while(t--){
		for(int i=0;i<4;i++){
			cin>>s>>j;
			m[s]=j;	
		}
		if(m["RealMadrid"]-m["Malaga"]>=0) cout<<"RealMadrid\n";
		else if(m["Barcelona"]-m["Eibar"]>0) cout<<"Barcelona\n";
		else cout<<"RealMadrid\n";
	}
}

