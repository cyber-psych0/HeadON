//Including Packages
#include<bits.stdc++.h>
using namespace std;

int main()
{ 
    //Printing the text
    cout << "Hello World" << endl;
}

#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx2")
//                 _Godspeed Rebels___
//                  _.' :  `._
//              .-.'`.  ;   .'`.-.
//     __      / : ___\ ;  /___ ; \      __
//   ,'_ ""--.:__;".-.";: :".-.":__;.--"" _`,
//   :' `.t""--.. '<@.`;_  ',@>` ..--""j.' `;
//       `:-.._J '-.-'L__ `-- ' L_..-;'
//          "-.__ ;  .-"  "-.  : __.-"
//              L ' /.------.\ ' J
//               "-.   "--"   .-"
//              __.l"-:_JL_;-";.__
//           .-j/'.;  ;""""  / .'\"-.
//         .' /:`. "-.:     .-" .';  `.
//      .-"  / ;  "-. "-..-" .-"  :    "-.
//   .+"-.  : :      "-.__.-"      ;-._   \
//   ; \  `.; ;                    : : "+. ;
//   :  ;   ; ;                    : ;  : \:
//  : `."-; ;  ;                  :  ;   ,/;
//   ;    -: ;  :                ;  : .-"'  :
//   :\     \  : ;             : \.-"      :
//   ;`.    \  ; :            ;.'_..--  / ;
//   :  "-.  "-:  ;          :/."      .'  :
//      \       .-`.\        /t-""  ":-+.   :
//       `.  .-"    `l    __/ /`. :  ; ; \  ;
//         \   .-" .-"-.-"  .' .'j \  /   ;/
//          \ / .-"   /.     .'.' ;_:'    ;
//           :-""-.`./-.'     /    `.___.'
//                 \ `t  ._  /  bug :F_P:
//                  "-.t-._:'
                 
//       _==/          i     i          \==_
//      /XX/            |\___/|            \XX\
//   /XXXX\            |XXXXX|            /XXXX\
//   |XXXXXX\_         _XXXXXXX_         _/XXXXXX|
//  XXXXXXXXXXXxxxxxxxXXXXXXXXXXXxxxxxxxXXXXXXXXXXX
// |XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// |XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|
//  XXXXXX/^^^^"\XXXXXXXXXXXXXXXXXXXXX/^^^^^\XXXXXX
//   |XXX|       \XXX/^^\XXXXX/^^\XXX/       |XXX|
//     \XX\       \X/    \XXX/    \X/       /XX/
//       "\       "      \X/      "      /"
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop0 for(ll i=0;i<n;i++) 
#define loop1 for(ll i=1;i<=n;i++)
#define loopr0 for(ll i=n-1;i>=0;i++)
#define fst first 
#define mod 1000000007
#define maxs 1000005
#define se second 
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
#define pll pair <ll, ll>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
inline ll add(ll a, ll b){return ((a+b)<mod ? (a+b) : (a+b-mod) );}
int prime[maxs];
int dppk(int kp1)
{   int jk=(int)pow(2,1);
    for(int ik=0;ik<(int)pow(jk,2);ik++){
    if(kp1==1)  kp1++;
    else kp1--;
    kp1=max(kp1,jk);
    } if(kp1==1) return kp1;
    else return 0;}
    int dppk1(int e)
{int e1,e2,e3;
e1=0;e2=e1;e3+=e1+e2;
if(e3==e1)
return e3;}
void seive()
{
        prime[1]=1;
        prime[0]=1;
       int i=2;
       while( i<=sqrt(maxs) )
       {
              if(prime[i]==1)
              {
                  continue;
              }
              int j=2*i;
              while(j<=maxs)
              {
                     prime[j]=1;
                     j+=i;
              }
              i++;
       }
}
inline ll sub(ll a , ll b){return ((a-b)<0?a-b+mod : a-b);}
ll power(ll a , ll b)
{
       ll y=1;
       if(b==0)
       return y;
        y = power(a , b/2);
        y = (y*y)%mod;
       if(b&1) y = (a*y)%mod;
       return y;
}
using namespace std;

// End of Template Real work begins 
ll tot = 0, divi = 0;

void go(vector <ll> v, ll x) {
    ll len=v.size();
    ll tmp=1,j=0;
  if(len!=1)
  {
  ll i=0;
  while(i<len-1)
   {
    vector <ll> nw;
     j=0;
    while(j<i){
      nw.pb(v[j]);
      j++;
    }
    tmp=v[i]+v[i+1];
    nw.pb(tmp);
    j=i+2;
    while(j<len)
    {
      nw.pb(v[j]);
      j++;
    }
    tmp= v[i] + v[i+1];
    tmp+=x;
    go(nw,tmp);
  }
  i++;
  }
  else 
  {
    tot = tot+x;
     divi=divi+tmp;
  
  }
  return;
}

void solve() {
  
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
      ll n;
       cin >> n;
  
  tot = 0;  divi = 0; 
  vector <ll> v(n);
   for(auto &i : v)
    cin >> i;

  
  go(v,0);
  ld result = (ld)(1.0*tot)/(ld)(1.0*divi);
  cout << setprecision(12) << result << '\n';
    }
    
}
