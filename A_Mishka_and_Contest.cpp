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
void solve(){
    ull n,k;
    cin>>n>>k;
    vecL vec;
    rep(i,0,n,1){
        ll a;
        cin>>a;
        vec.push_back(a);
    }
    ull start = 0,end = n-1,pro = 0;
    while(start<end){
        if(vec[start]>k && vec[end]>k){
            break;
        }

        if(vec[start]<=k){
            pro++;
            start++;
        }
        if(vec[end]<=k){
            end--;
            pro++;
        }
        if(start==end && vec[start]<=k){
            pro++;
        }
    }

    if(vec.size()==1 && vec.at(0)<=k){
        pro++;
    }
    cout<<pro<<endl;

}
int main() {
    // factorial();
    unsigned int T;
    // cin>>T;
    T=1;
    while(T--){
        solve();
    }
	return 0;
}
