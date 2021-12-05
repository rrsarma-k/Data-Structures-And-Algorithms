#include <bits/stdc++.h>
#define _deb(x) cerr << #x << " : " << x << '\n';
using namespace std;
using ll = long long;
using ull = unsigned long long;
void fastIO() { ios_base::sync_with_stdio(false); cin.tie(nullptr); }
template<class T> void deb(T t) { cerr << t; }
template<class T> void deb(vector<T>& ar) { cerr << "[ "; for(T t : ar) { deb(t); cerr << " "; } cerr << "]\n"; }
template<class T> void deb(set<T>& s) { cerr << "{ "; for(T t : s) { deb(t); cerr << " "; } cerr << "}\n"; }
template<class T> void deb(unordered_set<T>& us) { cerr << "{ "; for(T t : us) { deb(t); cerr << " "; } cerr << "}\n"; }
template<class K, class V> void deb(map<K, V>& m) { cerr << "{ "; for(auto x : m) { cerr << "{"; deb(x.first); cerr << " : "; deb(x.second); cerr << "} "; } cerr << "}\n"; }
template<class K, class V> void deb(unordered_map<K, V>& m) { cerr << "{ "; for(auto x : m) { cerr << "{"; deb(x.first); cerr << " : "; deb(x.second); cerr << "} "; } cerr << "}\n"; }
const int PRIMES_1E5 = 1299720;
const ll mxn = 1e9 + 1;	
bool hasTestCases = 1;

void solve() {	
	int n;
	cin >> n;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	freopen("err.txt", "w", stderr);
#else
#define cerr if(0) cerr
#endif
	fastIO();
	int T = 1;
	if (hasTestCases) cin >> T;
	int n = T;
	while (T--) solve();
}

