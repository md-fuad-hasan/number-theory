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
 
void prime_factorization(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                n/=i;
                cnt++;
            }

            cout<<i<<" ^ "<<cnt<<nl;
        }
    }
    if(n>1){
        cout<<n<< " ^ " <<1<<nl;
    }

    return;
} 
 
void solve()
{
   int n;cin>>n;
   prime_factorization(n);
    
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