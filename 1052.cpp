#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<string>> v; //用二维vector存储3个表情,注意vector类型为vector时，>要接一个空格
    for (int i = 0; i < 3; i++)
    {
        string s;
        getline(cin, s);
        vector<string> row;
        int j = 0, k = 0;
        while (j < s.length())
        {
            if (s[j] == '[')
            {
                while (k++ < s.length())
                {
                    if (s[k] == ']')
                    {
                        row.push_back(s.substr(j + 1, k - j - 1));
                        break;
                    }
                }
            }
            j++;
        }
        v.push_back(row);
    }
    int n, a, b, c, d, e;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d >> e;
        if (a > v[0].size() || b > v[1].size() || c > v[2].size() || d > v[1].size() || e > v[0].size() || a < 1 || b < 1 || c < 1 || d < 1 || e < 1)
        {
            cout << "Are you kidding me? @\\/@" << endl; //输出转义字符需要两个 "\\"
            continue;
        }
        cout << v[0][a - 1] << '(' << v[1][b - 1] << v[2][c - 1] << v[1][d - 1] << ')' << v[0][e - 1] << endl;
    }
    return 0;
}