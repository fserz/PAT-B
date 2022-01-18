# include <iostream>
# include <algorithm>
using namespace std;
bool cmp(int a, int b){//从大到小排序
    return a > b;
}
int a[100010];
int main(){
    int n, ans = 0, p = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)//下标从1开始
        cin >> a[i];
    sort(a + 1, a + n + 1, cmp);//数组a从大到小排序,sort中第二个为排序序列后一个元素
    while (a[p] > p){//a[p] > p骑行大于E没有等号
        ans++;
        p++;
    }
    cout << ans << endl;
    return 0;
}