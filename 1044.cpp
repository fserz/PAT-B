# include <iostream>
# include <string>
using namespace std;
string str;//你就是火星特工穿山球！
int len;
string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"####", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
void fun1(int t){//数字转换火星文
    if (t / 13) cout << b[t / 13];
    if ((t % 13) && (t / 13)) cout << " " ;
    if (t % 13 || t == 0) cout << a[t % 13];
}
void fun2(){//火星文转换数字
int t1 = 0, t2 = 0;
string s1, s2;
s1 = str.substr(0, 3);//s1为str从位置0开始取三个字符
if(len > 4)
s2 = str.substr(4, 3);
for (int i = 1; i <= 12; i++)
{
    if (s1 == a[i] || s2 == a[i]) t2 = i;//低位，一位，二位，两种情况
    if (s1 == b[i]) t1 = i;//高位
}
cout << t1 * 13 + t2;
}
int main(){
    int n;
    cin >> n;
    getchar();//吸收换行符
    for (int i = 0; i < n; i++)
    {
        getline(cin, str);//输入字符串
        len = str.length();
        if (str[0] >= '0' && str[0] <= '9')//=别丢
        {
            fun1(stoi(str));//stoi将string转换为int
        }else
        {
            fun2();
        }   
        cout << endl;
    }
    return 0;
}