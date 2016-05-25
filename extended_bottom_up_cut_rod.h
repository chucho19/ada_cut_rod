#include <iostream>
#include <limits.h>
using namespace std;

const int N = 100000;
int p[11];
int r[N], s[N];

void setear() {
    memset(r, -1, N);
    r[0] = 0;
    p[0] = 0;p[1] = 1;p[2] = 5;p[3] = 8;p[4] = 9;p[5] = 10;
    p[6] = 17;p[7] = 17;p[8] = 20;p[9] = 24;p[10] = 30;
}


int Extended_Bottom_Up_Cut_Rod(int n) {

    for (int j = 1; j <= n; ++j) {
        int q = 0;
        for (int i = 1; i <= j; ++i)
            if (q < p[i] + r[j - i]) {
                q = p[i] + r[j - i];
                s[j] = i;
            }
        r[j] = q;
    }
    return r[n];
}


void Print_Cut_Rod_Solution(int n) {
    do
        cout << s[n] << " ";
    while ((n -= s[n]) > 0);
}
