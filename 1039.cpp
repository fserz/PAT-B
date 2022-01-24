# include <iostream>
using namespace std;
int book[128];
string a, b;
int num = 0;
int main(){
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        book[a[i]]++;//出现的颜色++
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (book[b[i]] > 0)
        {
            book[b[i]]--;
        }
        else
        {
            num++;//出现不存在的颜色
        }
    }
    if (num == 0)
    {
        cout << "Yes" << " " << a.size() - b.size();
    }else
    {
        cout << "No" << " " << num;
    }
    return 0;
}