# include <iostream>
# include <cmath>
using namespace std;//四个数的和/正整数 N
bool judge(int a){
    int mark =0, m[1001] = {0};
    for (int i = 1; i <= a; i++)
        if(a % i == 0) 
          m[mark++] = i;
    for (int i = 0; i < mark; i++)
       for(int j = i + 1; j < mark; j++)
          for(int k = j + 1; k < mark; k++)
             for (int l = k + 1; l < mark; l++)
                if ((m[i] + m[j] + m[k] + m[l]) % a == 0)
                return true;
return false;   
}
int main(){//正因数包括1和正整数N本身
    int k, x;
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
            scanf("%d", &x);
            cout << (judge(x) ? "Yes" : "No")<< endl; 
    }
    return 0;
}