# include <cstdio>
# include <iostream>
# include <cmath>
using namespace std;
int main(){
    int  n;
    double a, b, r, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
     scanf("%lf%lf", &a, &b);
     r = sqrt(a * a + b * b);
     if (r > max)
         max = r;     
    }
    printf("%.2f\n", max);

    return 0;
}