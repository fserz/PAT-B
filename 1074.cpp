# include <iostream>
# include <string>
using namespace std;//将要相加的两个字符串S1和S2都扩展到和S等长，然后从后往前按照进制相加到ans中，注意进位carry
int main(){
    int flag  = 0, carry = 0;
    string s1, s2, s, ans;
    cin >> s >> s1 >> s2;
    ans = s;
    string ss1(s.length() - s1.length(), '0');
    s1 = ss1 + s1;
    string ss2(s.length() - s2.length(), '0');
    s2 = ss2 + s2;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        int mod = s[i] == '0' ? 10 : (s[i] - '0');
        ans[i] = (s1[i] - '0' + s2[i] - '0' + carry) % mod + '0';
        carry = (s1[i] - '0' + s2[i] - '0' + carry) / mod;    
    } 
    if(carry != 0)  ans = '1' + ans;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != '0' || flag == 1)//ans下标从0开始，从左往右
        {
            flag = 1;
            cout << ans[i];
        }
    }
    if (flag == 0)
    cout << '0';    
    return 0;
    }