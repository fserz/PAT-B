# include <algorithm>
# include <iostream>
# include <string>
using namespace std;
int main(){
    string s;
    int a, b, ans;
    cin >> a >> b;
    ans = a * b;
    s = to_string(ans);
    reverse(s.begin(), s.end());
    printf("%d", stoi(s));
    return 0;
}