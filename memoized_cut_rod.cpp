#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;

int memoized_cut_rod_aux(int p[],int n ,int *r){
    int q;
    if(r[n]>=0)
        return r[n];
    if(n==0)
        q=0;
    else {
        q=numeric_limits<int>::min();
        for(int i=0;i<n;i++)    q=max(q,p[i]+memoized_cut_rod_aux(p,n-(i+1),r));
    }
    r[n]=q;
    return q;
}
int memoized_cut_rod_(int p[],int n) {
    int r[n+1];
    for(int i=0;i<=n;i++)   r[i]=numeric_limits<int>::min();
    return memoized_cut_rod_aux(p,n,r);
}

int main() {
    int vec[]={1,5,8,9,10,17,17,20,24,30};
    int valor=memoized_cut_rod_(vec,10);
    cout<<valor<<endl;
    return 0;
}