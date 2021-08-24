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

vecULL returnFactors(ull n){
    vecULL vec;
    for(ull i =1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i != i){
                vec.push_back(i);
                ull j = n/i;
                vec.push_back(j);
            }else{
                vec.push_back(i);
            }
        }
    }
    return vec;
}


void solve(){
    ull n,a; cin>>n;

    vecULL vec;
    rep(i,0,n,1){
        cin>>a;
        vec.push_back(a);
    }
    
    int count=0;

    while(1){
        bool sortit = false;
        rep(i,0,n-1,1){
            if(vec[i]>vec[i+1]){
                sortit = true;
            }
        }

        if(sortit){
            rep(i,0,n-1,1){
                if(vec[i]>vec[i+1]){
                    swap(vec[i],vec[i+1]);
                    i++;
                }
            }
            count++;
        }else{
            break;
        }

    }
    // if(count!=0){
    //     count++;
    // }
    cout<<count<<endl;

}
int main() {
    unsigned int T;
    cin>>T;
    // T=1;
    while(T--){
        solve();
    }
	return 0;
}
