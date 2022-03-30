# include <iostream>
# include <string>
# include <cmath>
using namespace std;
int m, x, y;
void prin(double t){
    if (m == t) cout << " Ping";
    else if(m < t) cout << " Cong";
    else cout << " Gai";
}
int main(){
    cin >> m >> x >> y;
    for (int i = 99; i >= 10; i--)
    {
        int j = i % 10 * 10 + i / 10;
        double k = abs(j - i) * 1.0 / x;//丙要取double型
        if (j == k * y)
        {
            cout << i;
            prin(i);
            prin(j);
            prin(k);
            return 0;
        }
    }
    cout << "No Solution";
    return 0;
}