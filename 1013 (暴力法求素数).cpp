# include <cstdio>
# include <cmath>

bool isPrime(int n)
{ 
  if(n <= 1) return false;
  int sqr =  sqrt(1.0 * n);
  for(int i = 2; i <= sqr; i++){
      if(n % i == 0) return false;
  }
   return true;
};
const int max = 100001;
int prime[max], pnum = 0;
bool p[max] = {0};
void find_prime(int n){
    for(int i = 1; i < max; i++){
        if(isPrime(i) == true){
            prime[pnum++] = i;
            p[i] = true;
        }
        if(pnum > n) break;
    }
}


int main(){
    int m, n, count = 0;
    scanf("%d%d", &m, &n);
    find_prime(n);
    for(int i = m; i <= n; i++){
        printf("%d", prime[i - 1]);
        count++;
        if(count % 10 != 0 && i < n)
        printf(" ");
        else
        {
            printf("\n");
        }
        
    }



    return 0;
}