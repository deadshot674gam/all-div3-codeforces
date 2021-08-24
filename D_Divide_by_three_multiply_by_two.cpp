 #include <bits/stdc++.h>
#define lim 1000000007
#define rep(i,a,b,step) for(unsigned long long i=a;i<b;i+=step)
#define min(a,b) (a>b)?b:a
#define max(a,b) (a>b)?a:b
#define vecI vector<int>
#define vecB vector<bool>
#define vecL vector<long>
#define vecLL vector<long long>
#define vecUL vector<unsigned long>
#define vecULL vector<unsigned long long>
#define yes "YES"
#define no "NO"
using namespace std;

typedef unsigned long ul;
typedef unsigned long long ull;
typedef long long ll;

template <typename T>
ostream &operator<<(ostream &os, vector<T> arr){
    for (T i = 0; i < arr.size(); ++i){
        os << arr[i] << " ";
    }
    return os;
}

void swap(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

vector<ull> fact(1000000,1);
void factorial(){
    for (ull i = 2;i<1000000;i++){
        fact[i] = i* fact[i-1];
    }
    
}

void reverseString(string &s, ull l,ull h){
    while(l<h){
        char temp = s[l];
        s[l] = s[h];
        s[h] = temp;
        l++;
        h--;
    }
}
// vecULL vec;
// void formingPolycarps(){
//     for(int i=1;i<10001;i++){
//         if(i%3==0 || i%10==3) continue;
//         else vec.push_back(i);
//     }
// }

void solve(){
    ll n; cin>>n;
    set<pair<int,ll>> arr;
    rep(i,0,n,1){
        ull c,oc; cin>>c;
        oc = c;
        int powerOfthree =0;
        while(c%3==0) ++powerOfthree,c/=3;

        arr.insert({-powerOfthree,oc});
    }
    for(auto i: arr){
        cout<<i.second<<" ";
    }
}
int main() {
    unsigned int T;
    // cin>>T;
    T=1;
    while(T--){
        solve();
    }
	return 0;
}
