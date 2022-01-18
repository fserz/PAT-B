#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int v[100010];
int main(){
    int n, max = 0, count = 0;
    scanf("%d", &n);
    vector<int> a(n), b(n);//注意是()，不是[]
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    };
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] && b[i] > max)
        {
            v[count] = b[i];
            count++;
        }
        if (b[i] > max)
            max = b[i];
    }
    cout << count << endl;
   for (int i = 0; i < count; i++)
   {
           if (i != 0)
           cout << " ";
            cout << v[i];
   }
   cout << endl;
    return 0;
}