#include<bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define vi vector<int>
#define pi pair<int,int>
#define fi first
#define sc second
#define msi map<string,int>
#define mi map<int,int>
#define si set<int>
#define usi unordered_set<int>
#define ll long long
#define f(i,a,n) for(ll i=a;i<n;i++)
#define nl "\n" 
 
int pow_n(int base, int n){
    int res = 1;

    while(n){
        if(n&1){
            res*=base;
            n--;
        }else{
            base*=base;
            n/=2;
        }
    }


    return res;
}

 
void solve()
{
   int a,b;cin>>a>>b;

   int res = pow_n(a,b);

   cout<<res<<nl;
 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}