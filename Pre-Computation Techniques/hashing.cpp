// 1. Hashing 

/* Print factorial of a given number for each testcase % M where M = 1e9+7

constraints :
1<= T <= 10^5
1<= N <= 10^5

*/

// Basic code 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        long long fact = 1;
        for(int i=1;i<=n;i++) fact *= i;
        cout<< fact <<"\n";
    }
    
}
// O(T*N) = 10^10

// Optimised Code

#include<bits/stdc++.h>
using namespace std;
#define N 100000

long long fact[N];
int main(){
    fact[0] = fact[1] = 1;
    for(int i=2;i<=N;i++){
        fact[i] = fact[i-1]*i;
    }
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout<< fact[n]<<"\n";
    }
}

// O(N) + O(T) = 10^5 + 10^5 = 2*10^5