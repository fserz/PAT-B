# include <iostream>
# include <algorithm>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}
int a[10010];
int main(){
    int n, ans = 0, p = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)//下标从1开始
        cin >> a[i];
    sort(a + 1, a + n + 1, cmp);//数组a从小到大排序,sort中第二个为排序序列后一个元素
    while (a[p] >= p)
    {
        ans++;
        p++;
    }
    cout << ans << endl;
    return 0;
}