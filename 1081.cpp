# include <iostream>
# include <string>
# include <cctype>
using namespace std;
int main(){
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++)
    {
        string s;//题目只说了数字字母.是合法字符，并没有说空格是合法，所以不能用cin
        getline(cin, s);//字符串里面可能会有空格，所以不能直接用cin，要用getline接收一行字符。在接收完n后要getchar()读取一下换行符才能用getline，否则换行符会被读进getline中
        if (s.size() >= 6){
            int invaild = 0, hasnum = 0, hasalpha = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] != '.' && !isalnum(s[j])) invaild = 1;
                else if(isalpha(s[j])) hasalpha = 1;
                else if(isdigit(s[j])) hasnum = 1; 
            }
            if (invaild == 1) cout << "Your password is tai luan le." << endl;
            else if(hasnum == 0) cout << "Your password needs shu zi." << endl;
            else if(hasalpha == 0) cout << "Your password needs zi mu." << endl;
            else cout << "Your password is wan mei." << endl;
        }else 
            cout << "Your password is tai duan le." << endl;
    }
    return 0;
}
