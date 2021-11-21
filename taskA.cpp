#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <iomanip>
#include <set>
#include <map>
#include <algorithm>
#include <queue>
 
#define endl '\n'
#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define all(a) (a).begin(), (a).end()
#define len(a) (int((a).size()))
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef vector<int> vec;

int gcd(int a , int b) {
    if (b == 0) 
        return a;
    a %= b;
    return gcd(b, a);
}
 
void io() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << setprecision(15) << fixed;
    cerr << setprecision(15) << fixed;
}
 
// --------------------------- Preamble End ------------------------------------
 
void read() {

}

void solve() {

}
 
int main() {
    #ifdef _READFILE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
    io();
    read();
    solve();
}