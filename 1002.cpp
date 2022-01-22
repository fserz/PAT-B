# include <iostream>
# include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sum = 0;
    string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for (int i = 0; i < s.size(); i++)
        sum += (s[i] - '0');
    string num = to_string(sum);//to_string将数字常量转换为字符串
    for (int i = 0; i < num.size(); i++)
        {
            if (i != 0)
            cout << " ";
            cout << str[num[i] - '0']; 
        }
    return 0;
}