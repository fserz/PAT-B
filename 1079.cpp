# include <string>
# include <algorithm>
# include <iostream>
using namespace std;
string add (string a){
     int len = a.size(), carry = 0;
    string b = a, ans;
    reverse(b.begin(), b.end());
    for (int i = 0; i < len; i++)
    {
        int num = (a[i] - '0' + b[i] -'0') + carry;//从左往右加，之后reverse一次
        carry = 0;//进位还原为0
        if (num >= 10)
        {
            carry = 1;
            num = num - 10;
        }
        ans += char(num + '0');
    }
    if (carry == 1)
    ans += '1';
    reverse(ans.begin(), ans.end());//从左往右加，之后reverse一次
    return ans;
}
int main(){
        string s;
        cin >> s;
        int cnt = 0;
        while(cnt < 10){
            string t = s;
            reverse(t.begin(), t.end());
            if (t == s)
            {
                cout << s << " is a palindromic number." << endl;
                break;
            }else{
                cout << s << " + " << t << " = " << add(s) << endl;
                cnt++;
                s = add(s);
            }
    }
    if (cnt == 10)
        cout << "Not found in 10 iterations." << endl; 
    return 0;
}