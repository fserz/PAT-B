# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int main(){
    int N;
    long long p;//p需要用long long类型否则最后的测试点通不过
    cin >> N >> p;
    vector<int> v(N);//容量为N的vector
    for (int i = 0; i < N; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int temp = 0, result = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + result; j < N; j++)//每次从i + result开始,因为数字个数需大于result才会记录
        {
            if (v[j] <= v[i] * p)
            {
                temp = j - i + 1;//有几个数
            }
            if (temp > result)
            result = temp;//比原有的数多则更新result
            else break;
        }
    }
    cout << result << endl;
    return 0;
}
