# include <iostream>
# include <cmath>
using namespace std;
int main(){
    double r1, p1, r2, p2, A, B;
    cin >> r1 >> p1 >> r2 >> p2;
    A = r1 * r2 * cos(p1) * cos(p2) -  r1 * r2 * sin(p1) * sin(p2);
    B = r1 * r2 * cos(p1) * sin(p2) +  r1 * r2 * sin(p1) * cos(p2);
    if (A + 0.05 >= 0 && A < 0)//比如-0.001两位小数就应该输出0.00
    printf("0.00");
    else
    printf("%.2f", A);
    if (B + 0.05 >= 0 && B < 0)
    printf("+0.00i");//+不要丢
    else if(B > 0)
    printf("+%.2fi", B);
    else
    printf("%.2fi", B);
    return 0;
}