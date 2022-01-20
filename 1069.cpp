# include <iostream>
# include <map>
using namespace std;
int main(){
    int n, m ,s;
    cin >> m >> n >> s;//总量，间隔，第一位序号
    string str;
    bool flag = false;
    map<string, int> mp;
    for (int i = 1; i <= m; i++)
    {
        cin >> str;
        if (mp[str] == 1)//已经输出了,取下一个
        s++;
        if (i == s && mp[str] == 0)//没有赋值的键默认map值为0
        {
            mp[str] = 1;
            flag = true;
            cout << str << endl;
            s += n;
        }
    }
    if (flag == false)
    cout << "Keep going... " << endl;
return 0;
}