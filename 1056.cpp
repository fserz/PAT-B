# include <iostream>
using namespace std;

int main(){
    int n, temp;
    int sum = 0;
    cin >> n;
  for (int i = 0; i < n; i++)
  {
      cin >> temp;
      sum += temp * (n - 1) + temp * 10 * (n-1);//每个数字充当n-1次个位和十位
  }
  
    cout << sum << endl;
    return 0;
}