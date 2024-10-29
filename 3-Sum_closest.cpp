//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define  lli     long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
char alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
#define  nl      "\n"
#define  ce      cout<<"\n"
#define  pb      push_back
#define vi       vector<int>
#define vl       vector<lli>
#define  yes     cout<<"Yes"<<"\n"
#define  no      cout<<"No"<<"\n"
#define S        size()
#define L        length()
#define B        begin()
#define E        end()
#define F        first
#define se       second
#define lcm(a,b) a*b/__gcd(a,b)
#define for_t(i,j,n) for(int i=0,int j=n-1;i<j;i++,j--)
#define g_arr(a,n) sort(arr,arr+n,greater<int>())
#define dsort sort(vec.begin(), vec.end(), greater<int>())
#define PI 3.1415926535897932384626433832795
#define isort sort(vec.B,vec.E)
#define fpre for(int i=1;i<n;i++){pre[i]=pre[i-1]+vec[i];}
#define sp " "
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define fo(i,n) for (int i = 0; i < n; ++i)
#define fo_index(i,k,n) for ( int i = k; i <= n; ++i)
#define rev_fo_index(i,k,n) for (int i = k; i >= n; --i)
//--------------ordered set Functionality-----------------
/*
//-------------Ordered set declared with name o_set--------
    ordered_set o_set;
 
//-------------Finding the second smallest element--------
 
    cout << *(o_set.find_by_order(1))<< endl;
 
 
//------------Finding the number of elements strictly less than k=4--------------
 
    cout << o_set.order_of_key(4)<< endl;
*/
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<"=";_print(x);cerr<<nl;
#else
#define debug(x)
#endif
void _print(int a){cerr<<a;}
void _print(lli a){cerr<<a;}
void _print(double a){cerr<<a;}
void _print(char a){cerr<<a;}
void _print(bool a){cerr<<a;}
void _print(string a){cerr<<a;}
 
template<class T>void _print(vector<T>vec){
    cerr <<"[ ";
    for(T it:vec){
        cerr<<it<<" , ";
    }
    cerr<<" ]";
}
 
template<class T>void _print(set<T>st){
    cerr <<"[ ";
    for(T it:st){
        cerr<<it<<" , ";
    }
    cerr<<" ]";
}
template<class T>
void _print(const map<T, T>& mp) {
    cerr << "{ ";
    for(const auto& pair : mp) {
        cerr <<"( " << pair.first << " : " << pair.second << ") ";;
    }
    cerr << " }" << nl;
}
void _print(priority_queue<int> pq) {
    cerr << "{ ";
    // Temporary vector to restore the original state of priority_queue
    vector<int> temp;
    
    // Pop elements from priority_queue and print them
    while (!pq.empty()) {
        int top = pq.top();
        cerr << top << " ";
        temp.push_back(top);  // Store the element in temp vector
        pq.pop();             // Pop the element from priority_queue
    }
    
    // Restore the original state of priority_queue
    for (int num : temp) {
        pq.push(num);
    }
    
    cerr << "}" << endl;
}
void _print(priority_queue<pair<int, int>> pq) {
    cerr << "{ ";
 
    // Temporary vector to restore the original state of priority_queue
    vector<pair<int, int>> temp;
 
    // Pop elements from priority_queue and print them
    while (!pq.empty()) {
        auto top = pq.top();
        cerr << "(" << top.first << "," << top.second << ") ";
        temp.push_back(top);  // Store the element in temp vector
        pq.pop();             // Pop the element from priority_queue
    }
 
    // Restore the original state of priority_queue
    for (auto& elem : temp) {
        pq.push(elem);
    }
 
    cerr << "}" << endl;
}
template<class T>
void _print(const vector<pair<T, T>>& vec) {
    cerr << "{ ";
    for(const auto& pair : vec) {
        cerr << "(" << pair.first << ", " << pair.second << ") ";
    }
    cerr << "}" << endl;
}
template<class T,class V>void _print(pair<T,V>pa){
    cerr <<"[ ";
    _print(pa.F);
    cerr<<sp;
    _print(pa.se);
    cerr<<" ]";
}
const int N=1e6+10;
const int   M=1e9+7;
 
int arr[N]={0};
int prime[N];
int fact[N];
int inver_fact[N];
 
// 2D vector with size...............
// vector<vector<int>> vec( row_size , vector<int> (col_size));
 
lli mini=1e18;
template<typename T, typename U>
static inline void amin(T &x, U &y){if (y < x)x = y;}
 
lli maxi=-1e18;
template<typename T, typename U>
static inline void amax(T &x, U &y) {if (x < y) x = y; }
lli mod(lli x){
    return ((x%M+M)%M);
}
 
lli power_Bigmod(lli x, lli y, lli p)
{
    lli res = 1;
    while (y > 0) {
        if (y % 2 == 1)
            res = mod(mod(res) * mod(x));
        // y = y/2
        y = y >> 1;
        x = mod(mod(x) * mod(x));
    }
    return res % p;
}
 
lli add(lli a, lli b){
    return mod(mod(a)+mod(b));
}
lli mul(lli a,lli b){
    return mod(mod(a)*1ll*mod(b));
}
lli sub(lli a, lli b){
    return mod(mod(a)+mod(b)+ M);
}
lli Div(lli a,lli b){
    return mod(mod(a)*mod(power_Bigmod(b,M-2,M)));
}
void factorial(){
    fact[0]=1;
 
    for(int i=1;i<N;i++){
    //    debug(fact[i-1])
        fact[i]=(fact[i-1]*1ll*i)%M;
        inver_fact[i]=power_Bigmod(fact[i],M-2,M);
 
    }
}
 
 
lli nCr(lli n,lli r){
    if(n<r) return 0;
    lli res=fact[n];
    res=(res*power_Bigmod(fact[r],M-2,M))%M;
    res=(res*power_Bigmod(fact[n-r],M-2,M))%M;
    return res;
}
 
 
lli  amin(lli x,lli y){
    if(x>y) return y;
    else return x;
}
lli amax(lli x,lli y){
    if(x<y)return y;
    else return x;
}
 
//set bit in position index
int set_bit(int n,int index){
    return (n| (1<<index));
 
}
//Flip bit in position index
int Flip_bit(int n,int index){
    return (n^ (1<<index));
 
}
 
// check is it set bit in position index
int check_bit(int n,int index){
    return (n & (1<<index));
}
 
bool primality_test(lli n){
      if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for(lli i=5;i*i<=n;i++){
        if (n % i == 0) return false;
 
        }
    
    return true;
 
}
 
void seive(){
    for(int i=1;i<=N;i++){
        prime[i]=i;
    }
 for(int i=2;i*i<=N;i++){
    if(prime[i]==i){
        for(int j=2*i;j<=N;j+=i){
            prime[j]=i;
        }
    }
   }
 
}
//count number of coprime
 
void phi_1_to_n(int n) {
    vector<pair<int,int>> phi(n + 1);
    for (int i = 0; i <= n; i++)
       { phi[i].first = i;
    phi[i].se=i;}
 
    for (int i = 2; i <= n; i++) {
        if (phi[i].first == i) {
            for (int j = i; j <= n; j += i)
               {
 
                 phi[j].first -= phi[j].first / i;
                 
    
               }
        }
    }
    for(auto it:phi){cout<<it.F<<sp<<it.se<<nl;}
}
lli binary(lli n){
    lli low=0,high=1e9;
    while (low < high) {
            lli mid = (low + high+1)>>1;
            if (mid*(mid+1)/2<= n) {
                low = mid;
            } else {
                high = mid -1;
            }
        }
    return low;
}
 
 
 map<lli,multiset<lli>>prime_factor_fre;
void prime_factor(lli n){
         for(lli j=2;j*j<=n;j++){
        if(n%j==0){
            lli cnt=0;
            while(n%j==0){
                cnt++;
                n/=j;
            }
           cout<<j<<"^"<<cnt<<sp;
        }
    }
     if(n>1){
            cout<<n<<"^"<<1<<sp;
        }
      }
 
double eDis(double x1,double y1,double x2,double y2){
    return sqrtl((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
 
lli power(lli base, lli exponent) {
    lli result = 1;
    //base = base % modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) ;
        }
        exponent = exponent >> 1;
        base = (base * base);
    }
    return result;
}
 
string bin(lli x)
{
    return bitset<40>(x).to_string();
}
     
inline void MODE() {
 
#ifndef ONLINE_JUDGE
 
freopen("inputf.txt", "r", stdin);
 
freopen("outputf.txt", "w", stdout);
 
freopen("expected output_txt.txt","w",stderr);
 
#endif // ONLINE_JUDGE
}
  struct Comparator {
    bool operator()(int a, int b) const { 
        return a > b; // Sort in descending order
    }
};
 
 
  //int n,k,a,b,c,d,e,f,g;
  bool flag;
void slove(){
    int n;
    cin>>n;
   vi nums(n);
   fo(i,n)cin>>nums[i];
   sort(nums.begin(),nums.end());
   int target;
   cin>>target;
   int ans=INT_MAX,ans1;
   for(int i=0;i<nums.size();i++){
    int j=i+1,k=nums.size()-1;
    while(j<k)
    {
        int sum=nums[i]+nums[j]+nums[k];
       int x =sum-target;
        debug(sum);
        debug(target)
        debug(nums[i]);
        debug(nums[j]);
        debug(nums[k]);
        x=abs(x);
        debug(x);
        if(ans>x){
            ans=min(ans,x);
            debug(ans)
            ans1=sum;
            debug(ans1)

        }
          k--;

    }
   }
   cout<<ans1<<nl;
   }

 
 
int main(){
    
    fast;
    MODE();
   // seive();
    //factorial();
              int test;
              cin>>test;
               for(int i=1;i<=test;i++)
                slove();}