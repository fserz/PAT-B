# include <iostream>
# include <algorithm>
using namespace std;
int main(){
    int a[100], b[100], n, i, j;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    for ( i = 0; i < n - 1 && b[i] <= b[i + 1]; i++);//没有循环体
    for (j = i + 1; a[j] == b[j] && j < n; j++);//没有循环体
    if (j == n)
    {
        cout << "Insertion Sort" << endl;
        sort(a, a + i + 2);
    }else{
        cout << "Merge Sort" << endl;
        int k = 1, flag = 1;
        while (flag){
            flag = 0;
            for (int i = 0; i < n; i++){
                if (a[i] != b[i])
                    flag = 1;
                }
                k *= 2;
                for (i = 0; i < n / k; i++)
                    sort(a + i * k, a + (i + 1) * k);
                sort(a + n / k * k, a + n);
            }
        }
        for (int j = 0; j < n; j++){
            if( j != 0) cout << " ";
            cout << a[j];
    }
    return 0;
}