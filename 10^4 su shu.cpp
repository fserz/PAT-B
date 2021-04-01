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




    return 0;
}