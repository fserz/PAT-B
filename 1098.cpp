# include <iostream>
# include <cmath>
using namespace std;//贪心寻找上界最小，下界最大
int main(){
    int n, top, bottom, max = 0, min = 1000;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> top;
        if (top < min) min = top;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> bottom;
        if (bottom > max) max = bottom;
    }
    if (min - max >= 1)
    {
        printf("Yes %d", min - max);
    }else{
        printf("No %d", 1 + abs(min - max));//上下相等时记得+1(相等削掉1个高度)
    }
    return 0;
}