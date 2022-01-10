# include <iostream>
# include <cstdio>
# include <cstring>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < 4 * n; i++)
    {
        cin >> s;
        if (s.size() == 3 && s[2] == 'T')
        {
            cout << s[0] - 'A' + 1;
        }   
    }   
    return 0;
}