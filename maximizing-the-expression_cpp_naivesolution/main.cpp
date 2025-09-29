/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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