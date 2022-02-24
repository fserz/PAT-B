# include <iostream>
# include <vector>
using namespace std;
int gcd(int a, int b){
    return !b ? a : gcd(b, a % b);
}
int main(){
    int n1, n2, m1, m2, k, num = 0;
    scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
    if (n1 * m2 > n2 * m1)// n1/m1 有可能大于 n2/m2
    {
        swap(n1, n2);
        swap(m1, m2);
    }
    
    vector<int> u;
    vector<int> v;
    double a1 = (double)n1 / m1;
    double a2 = (double)n2 / m2;
    for (int i = 0; i < k; i++)
    {
        if ((double)i / k > a1 && (double)i / k < a2)
            u.push_back(i);
    }
    for (auto it = u.begin(); it != u.end(); it++)
    {
        if (gcd(*it, k) == 1)//最大公约数为1即没有公约数
        {
            num++;
            v.push_back(*it);
        }
    }
    printf("%d/%d", v[0], k);
    for (int i = 1; i < num; i++)
        printf(" %d/%d", v[i], k);
    return 0;
}