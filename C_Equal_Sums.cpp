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
    int k;
    cin>>k;
    set <pair<int, pair<int,int>>> ans;
    rep(i,0,k,1){
        ull n;
        ll q,summ=0;
        cin>>n;

        vecL seq;
        while(n--){
            cin>>q;
            seq.push_back(q);
            summ+=q;
        }

        rep(j,0,seq.size(),1){
            ans.insert({summ-seq.at(j),{i+1,j+1}});
        }
    }

    pair<int,pair<int,int>> prev = *(ans.begin());
    bool is(true);
    for(auto i : ans){
        if(i== *(ans.begin())) continue;
        if(i.first == prev.first && i.second.first != prev.second.first){
            cout<<yes<<endl;
            cout<<prev.second.first<<" "<<prev.second.second<<endl;
            cout<<i.second.first<<" "<<i.second.second<<endl;
            is = false;
            break;
        }else{
            prev.first = i.first;
            prev.second.first = i.second.first;
            prev.second.second = i.second.second;
        }
    }

    if (is){
        cout<<no<<endl;
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
