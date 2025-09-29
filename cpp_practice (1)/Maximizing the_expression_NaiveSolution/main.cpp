// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits.h>
//#include <algorithm.h> 
using namespace std;

// Maximize the expression
int main() {
    int N, p,q,r;
    cin >> N >> p >> q >> r;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    int ans = INT_MIN;
    for (int i=0; i<N;i++){
        for (int j=i;j<N;j++){
            for (int k= j; k< N; k++)
            {
                ans = max(ans, A[i]*p + A[j]*q + A[k]*r);
            }
        }
    }
    cout<<ans;

    return 0;
}