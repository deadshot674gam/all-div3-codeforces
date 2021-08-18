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
#define neg -1
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

void solve(){
    ull k;
    cin>>k;

    ull ub = ceil((double)sqrt(k));
    ull lb = floor((double)sqrt(k));

    if(ub*ub - k == 0){
        cout<<ub<<" "<<1<<endl;
    }else if(ub*ub - k == k - lb*lb){
        cout<<ub<<" "<<ub<<endl;
    }else if(ub*ub - k < k - lb*lb){
        cout<<ub<<" "<<ub*ub - k +1<<endl;
    }else if(ub*ub - k > k - lb*lb){
        cout<<k - lb*lb<<" "<<ub<<endl;
    }
}
int main() {
    // factorial();
    unsigned int T;
    cin>>T;
    // T=1;
    while(T--){
        solve();
    }
	return 0;
}
