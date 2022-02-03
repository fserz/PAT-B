# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
int arr[10000];
bool cmp(int a, int b)
{
    return a > b;
}
int main (){
    int n, k, flag = 0;
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> n;
        v[i] = n;
        while (n != 1)
        {
            if (n % 2 != 0)
                n = (3 * n + 1) / 2;
            else
                n /= 2;
            if (arr[n] == 1)//已出现过故break
            break;
            arr[n] = 1;//未出现过的将其对应位置为1
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int  i = 0; i < v.size(); i++)
    {
        if (arr[v[i]] == 0){//输出没有被覆盖的数
            if (flag == 1)
            cout << " ";
            cout << v[i];
            flag = 1;
        }
    }
    return 0;
}