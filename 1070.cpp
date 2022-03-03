# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> m(n);//容量为n的vector
    for (int i = 0; i < n; i++)
    cin >> m[i];//用scanf或cin读入
    sort(m.begin(), m.end());
    int ans = m[0];
    for (int i = 1; i < n; i++)
        ans = (ans + m[i]) / 2;
    cout << ans;
    return 0;
}