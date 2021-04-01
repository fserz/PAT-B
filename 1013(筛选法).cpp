#include <cstdio>
#include <cmath>
const int max = 100001;

/* bool isPrime(int n)
{ 
  if(n <= 1) return false;
  int sqr =  sqrt(1.0 * n);
  for(int i = 2; i <= sqr; i++){
      if(n % i == 0) return false;
  }
   return true;
};*/

int prime[max], num = 0;
bool p[max] = {0};
void find_prime(int n){
    for(int i = 2; i < max; i++){
        if(p[i] == false){
            prime[num++] = i;
            if(num > n) break;
            for(int j = i; j < max;j +=i){
                p[j] = true;
            }
        }

    }
}



int main(){
    int m, n, count = 0;
    scanf("%d%d", &m, &n);
    find_prime(n);
    for(int i = m; i <= n; i++){
        printf("%d", prime[i - 1]);
        count++;
    if(count % 10 != 0 && i < n) printf(" ");
    else
        printf("\n");
    }

    return 0;
}
