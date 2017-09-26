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

void solve(){
	int n,m,i,j,c,d;
	cin>>n;
	vector<int> b(n);
	for(i=0;i<n;++i) cin>>b[i];
	cin>>m;
	vector<int> g(m);
	for(i=0;i<m;++i) cin>>g[i];
	sort(b.begin(),b.end());
	sort(g.begin(),g.end());
	i=0,j=0;
	int count=0;
	while(i<n && j<m){
		c = b[i]-g[j];
		d = g[j]-b[i];
		if(c==1 || c==0 || d==1 || d==0){
			count++;
			++i,++j;
		}
		else{
			if(b[i]>g[j]) ++j;
			else ++i;
		}
	}
	cout<<count;
}

int main(){
	setup_env();
	solve();
}
