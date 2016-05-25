#include <iostream>
#include <math.h>
using namespace std;

int bottom_up_cut_rod_(int p[], int n) {
    int q;
    int rr[n+1];
    rr[0]=0;
    for(int j=1;j<=n;j++) { // puede empezar en 0 y sera <n
        q=numeric_limits<int>::min();
        for(int i=0;i<=j;i++)
            q=max(q,p[i]+rr[j-i]);
        rr[j+1]=q;
    }
    return rr[n];
}