#include <bits/stdc++.h>
using namespace std;
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
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
	int n,u,v;
	cin>>n;
	vector<bool> a(10001,0),b(10001,0);
	for(int i=0;i<n-1;++i){
		cin>>u>>v;
		if(a[u-1]){
			b[v-1]=1;
		}
		else if(b[u-1]){
			a[v-1]=1;
		}
		else if(a[v-1]){
			b[u-1]=1;
		}
		else if(b[v-1]){
			a[u-1]=1;
		}
		else{
			a[u-1]=1,b[v-1]=1;
		}
	}
	cout<<(count(a.begin(),a.end(),1)*count(b.begin(),b.end(),1))-(n-1);
}

int main(){
	setup_env();
	//int t;
	//cin>>t;
	//while(t--)
	solve();
}

