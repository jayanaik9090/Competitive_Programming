///////////////////////////////////
//      Author:  Gaurav Bholla   //
//      Institution: ASET        //
///////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define repi(i, a, b) for(int i = a; i >= (b); --i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define endl '\n'
#define PB push_back
#define MP make_pair
#define MOD 1000000007
typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector< vector<ll> > matrix;

int main() {

	cin.sync_with_stdio(0); cin.tie(0);
	cin.exceptions(cin.failbit);
	ll n;
	cin>>n;
	vi arr(n);
	trav(a,arr)
        cin>>a;
    ll ans=10000000000000;
    rep(i,0,n)
    {
        ll tans=0;
        rep(j,0,n)
        {
            tans = (abs(arr[i]-arr[j])%2==0)? tans: tans+1;
        }
        ans=min(tans,ans);
    }
    cout<<ans;
	return 0;
}
