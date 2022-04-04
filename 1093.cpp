# include <iostream>
# include <string>
using namespace std;
int s[200] = {0};
int main (){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int lena = a.length();
    int lenb = b.length();
    for (int i = 0; i < lena; i++)
    {
        if(s[a[i]] == 0){
        cout << a[i];
        s[a[i]] = 1;
        }
    }
    for (int i = 0; i < lenb; i++)
    {
        if(s[b[i]] == 0){
        cout << b[i];
        s[b[i]] = 1;
        }
    }
    return 0;
}