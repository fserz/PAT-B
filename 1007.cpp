# include <cstdio>
# include <cmath>

bool isprime(int n){
    if(n <= 1) return false;
    int sqr = sqrt(1.0 * n);
    for(int i = 2; i <= sqr; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n, count = 0;
    scanf("%d", &n);
    for(int i = 3; i + 2 <= n; i += 2){
        if(isprime(i) && isprime(i + 2)){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}