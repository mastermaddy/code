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
	int n,m;
	cin>>m>>n;
	vi v(n);
	for(int i=0;i<n && cin>>v[i];++i);
	sort(v.begin(),v.end());
	if(m>n) cout<<"0";
	else{
		int diff = v[m-1]-v[0];
		for(int j=1,i=m;i<n;++i,++j){
			diff = ((diff>v[i]-v[j])?v[i]-v[j]:diff);
		}
		cout<<diff;
	}
}

int main(){
	setup_env();
	solve();
}

