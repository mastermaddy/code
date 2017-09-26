#include <bits/stdc++.h>
using namespace std;
#define pb                       push_back
#define hashmap             	 unordered_map
#define hashset             	 unordered_set
#define checkbit(n, b)      ((n >> b) & 1)
#define setbit(n, b)        (b |= (1 << n))
#define resetbit(n, b)      (b &= ~(1 << n))
#define LEFT(i)             (2*i + 1)
#define RIGHT(i)            (2*i + 2)
#define MID(i, j)           ((i+j)/2)
#define INF                 INT_MAX
#define NINF                INT_MIN
#define P(n, m)             pair<n,m>
#define MOD                 1000000007
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<ll, ll> pll;
typedef pair<int, int> ii;
typedef set<int>::iterator sit;

void setup_env() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool DFS(vi v,int V,int d){
	int i=1;
	while(i<d && i<=V){
		i=v[i];
		if(i==d) return true;
		if(i>d) return false;
	}
	return false;
}


void solve(){
	int V,d,x;
	cin>>V>>d;
	vector<int> v(V+1);
	for(int i=1;i<V;++i){
		cin>>x;
		v[i]=i+x;
	}
	DFS(v,V,d)?cout<<"YES\n":cout<<"NO\n";
}

int main(){
	setup_env();
	solve();
}

