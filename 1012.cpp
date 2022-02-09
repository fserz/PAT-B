# include <iostream>
# include <vector>
using namespace std;
int main(){
    int n, A1 = 0, A2 = 0, A3 = 0, A5 = 0, num;
    double A4 = 0.0;
    vector<int> v[5];//5个vector
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v[num%5].push_back(num);
    }
    for (int i = 0; i < 5; i++)//5个vector
    for (int j = 0; j < v[i].size(); j++)
    {
        if (i == 0 && v[i][j] % 2 == 0) A1 += v[i][j];
        if (i == 1 && j % 2 == 0) A2 += v[i][j];
        if (i == 1 && j % 2 == 1) A2 -= v[i][j];
        if (i == 3) A4 += v[i][j];
        if (i == 4 && v[i][j] > A5) A5 = v[i][j];
    }
    for (int i = 0; i < 5; i++)
    {
        if (i != 0) cout << " ";
        if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0)//输出N的无非两种情况，对于A1来说，A1等于0就要输出N；对于A2-A5来说，假设被5整除后余i，不存在这种数字，也就是v[i].size() == 0时候输出N
        {
            cout << "N";
            continue;
        }
        if (i == 0) cout << A1;
        if (i == 1) cout << A2;
        if (i == 2) cout << v[2].size();
        if (i == 3) printf("%.1f", A4 / v[3].size());
        if (i == 4) cout << A5;
    }
    return 0;
}