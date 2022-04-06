# include <iostream>
using namespace std;
int main(){
    int m, k, i, a;
    cin >> m;
    while (m--)
    {
        cin >> k;
        for(i = 1; i < 10; i++){
        a = i * k * k;
        if (a % 10 == k) break;
        else if(a % 100 == k) break;
        else if(a % 1000 == k) break;
        }
        if (i == 10) cout << "No" << endl; 
        else
            cout << i << " " << a << endl;
    }
    return 0;
}