/*
Given an integer NN, help Chef in finding an N-digit{odd positive integer}odd positive integer X such that X is divisible by 3 but not by 9.

Note: There should not be any leading zeroes in X. In other words, 003 is not a valid 3-digit odd positive integer.

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
typedef unordered_map<int,int> mp;
typedef map<int,int> m;
#define mod 1e9+7
#define pb push_back
#define fs first
#define s second
#define f(i,s,e) for(int (i)=s ; (i) < e ; (i)++)
#define cf(i,s,e) for(int (i)=s ; (i)<=e ; (i)++)
#define rf(i,s,e) for(int (i)=s ; (i)>=e ; (i)--)


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n==1) cout << 3 << endl;
        else {
            cout << 1;
            for(int i=1 ; i<n-1 ; i++) cout << 0;
            cout << 5 << endl;
        }
    }
    
    return 0;
}