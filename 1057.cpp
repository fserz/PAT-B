# include <iostream>
# include <cctype> //字符库函数
# include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))//判断是否是字母
        {
            s[i] = toupper(s[i]);//如果参数是小写字符，则返回其大写，否则返回其参数
            n += (s[i] - 'A' + 1);//a-z对映1-26，不是0
        }  
    }
    int cnt0 = 0, cnt1 = 0;  
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            cnt0++;
        }else
        {
            cnt1++;
        }
        n /= 2;
    }
    cout << cnt0 << " " << cnt1 << endl;
    return 0;//海豹宝宝棒棒棒，海豹抱抱冰棒棒。
}