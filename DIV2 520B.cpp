#include <bits/stdc++.h>
using namespace std;
#define SWAP(a,b) (((a) ^ (b)) && ((b) ^= (a) ^= (b), (a) ^= (b))) 
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

void BFS(int n,int m){
	vi visited(10005,0);
	vi dist(10005,INT_MAX);
	queue<int> q;
	q.push(n);
	visited[n]=true;
	dist[n]=0;
	while(!q.empty()){
		int t = q.front();
		q.pop();
		if(t*2<10004 && !visited[t*2]){
			dist[t*2]=dist[t]+1;
			q.push(t*2);
			visited[t*2]=1;
			if(t*2==m){
				break;
			}
		}
		if((t-1)>=0 && !visited[t-1]){
			dist[t-1]=dist[t]+1;
			q.push(t-1);
			visited[t-1]=1;
			if((t-1)==m){
				break;
			}
		}
	}
	cout<<dist[m];
}

void solve(){
	int n,m;
	cin>>n>>m;
	if(m<n){
		cout<<n-m;
		return;
	}
	else{
		BFS(n,m);
	}
}

void solve1(){
	int a,b;
	cin>>a>>b;
	SWAP(a,b);
	cout<<a<<" "<<b;
}
int main(){
	setup_env();
	solve1();
}

