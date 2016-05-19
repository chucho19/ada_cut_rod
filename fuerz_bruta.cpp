#include <algorithm>
#include <iostream>
#include <limits>
using namespace std;
int cut_rod_(int p[], int n)    {
    if (n <= 0)
        return 0;
    int q = numeric_limits<int>::min();
    for (int i = 0; i<n; i++)   q = max(q, p[i] + cut_rod_(p, n-i-1));
    return q;
}

int main()  {
    int vec[] = {1,5,8,9,10,17,17,20,24,30};
    int valor=cut_rod_(vec, 10);
    cout<<valor<<endl;
    return 0;
}