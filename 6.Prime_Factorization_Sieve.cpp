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
 
 int arr[100001];

 void sieve(){
    int n = 100000;
    for(int i=1;i<=n;i++){
        arr[i]=-1;
    }

    for(int i=2;i<=n;i++){
        if(arr[i]==-1){
            for(int j=i;j<=n;j+=i){
                arr[j]=i;
            }
        }
    }
 }
 
void solve()
{
   int n;cin>>n;

   mi m;
   while(n!=1){
    m[arr[n]]++;
    n=n/arr[n];
   }

   for(auto &mp:m){
    cout<<mp.fi<<' '<<mp.sc<<nl;
   }

 
   return;
}
 
 
 
int main()
{
 
    FastIO
    int test = 1;
    sieve();
    // cin>>test;
    while(test--){
        solve();
    }
    return 0;
}