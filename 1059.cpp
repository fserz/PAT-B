#include <iostream>
#include <set>
#include <cmath>
using namespace std;
const int maxn = 10010;
int r[maxn] = {0};
bool isprime(int n)//判断素数
{
    if (n <= 1)
    {
        return false;
    }
    else
    {
        int sqr = sqrt((double)n);
        for (int i = 2; i <= sqr; i++)//i从2开始，取到小于等于平方根
        {
            if (n % i == 0)
                return false;
        }
    }
    return true;//没有公约数为素数
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int id;
        scanf("%d", &id);
        r[id] = i + 1;
    }
    int k;
    set<int> s;
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        int id;
        scanf("%d", &id);
        printf("%04d: ", id);        
        if (r[id] == 0)//先判断有没有，否则会插入进set,再次查询时便会输出checked
        {
            printf("Are you kidding?\n");
            continue;
        }
        if (s.find(id) == s.end()) //未在set中
        {
            s.insert(id);
        }else{
            printf("Checked\n");
            continue; //出现其中的一种情况就continue进入下循环
        }
         if (r[id] == 1)
        {
            printf("Mystery Award\n");
        }
        else if (isprime(r[id]))
        {
            printf("Minion\n");
        }else{
            printf("Chocolate\n");
        }
    }
    return 0;
}