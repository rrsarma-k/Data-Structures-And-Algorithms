#include <bits/stdc++.h>
#define LOCAL
#define dbg(x) cerr << #x << " : " << x << '\n';
using namespace std;

/******* Datatype Aliases ****/
using ll = long long;
using ull = unsigned long long;
/*****************************/

/********************************************************** Debugger ******************************************************************************************************************/
template<class T> void deb(T t) { cerr << t; }
template<class T> void deb(vector<T>& ar) { cerr << "[ "; for(T t : ar) { deb(t); cerr << " "; } cerr << "]\n"; }
template<class T> void deb(set<T>& s) { cerr << "{ "; for(T t : s) { deb(t); cerr << " "; } cerr << "}\n"; }
template<class T> void deb(unordered_set<T>& us) { cerr << "{ "; for(T t : us) { deb(t); cerr << " "; } cerr << "}\n"; }
template<class K, class V> void deb(map<K, V>& m) { cerr << "{ "; for(auto x : m) { cerr << "{"; deb(x.first); cerr << " : "; deb(x.second); cerr << "} "; } cerr << "}\n"; }
template<class K, class V> void deb(unordered_map<K, V>& m) { cerr << "{ "; for(auto x : m) { cerr << "{"; deb(x.first); cerr << " : "; deb(x.second); cerr << "} "; } cerr << "}\n"; }
/**************************************************************************************************************************************************************************************/

/********* Constants *********/
const int PRIMES_1E5 = 1299720;
const ll mxn = 1e9 + 7;	
bool hasTestCases = 1;
/*****************************/

/************** ll comparisons *****************/
ll minll(ll a, ll b) { return (a < b ? a : b); }
ll maxll(ll a, ll b) { return (a > b ? a : b); }
/***********************************************/

// Testcase function.
void solve() {	
	int n;
	cin >> n;
}

int main() {
	// Local directive for IO files.
	#ifdef LOCAL
		freopen("Input.txt", "r", stdin);
		freopen("Output.txt", "w", stdout);
		freopen("Error.txt", "w", stderr);
	#else
		#define cerr if(0) cerr
	#endif

	// Fast IO.
	ios_base::sync_with_stdio(0); cin.tie(0);

	int T = 1;
	if(hasTestCases) cin >> T;
	for(int i = 0; i < T; ++i) solve();
}