# include <cstdio>
# include <cstring>
# include <algorithm>
using namespace std;
bool Hashtable[10000] = {false};
bool cmp(int a, int b){
    return a > b;
}



int main(){
int k, n, a[110];
scanf("%d", &k);
for(int i = 0; i < n; i++){
scanf("%d", &a[i]);
n = a[i];
 while(n != 1){
     if (n % 2 == 1)
     {
         n = (3 * n + 1) / 2;
     }
     else
     {
         n = n / 2;
     }
     Hashtable[n] = true;
        }
}



int count = 0;
for(int i = 0; i < k; i++){
    if(Hashtable[a[i]] == false)
    count++;
}


sort(a, a + k, cmp);
for(int i = 0; i < n; i++){
    if (Hashtable[a[i]] == false){
        printf("%d", a[i]);
        count--;
        if(count > 0){
            printf(" ");
        }
    }
}



    return 0;
}