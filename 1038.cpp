# include <cstdio>

int Hashtable[105] = {0};
 int main()
 {
     int n, score, k;
     scanf("%d", &n);
     for(int i = 0; i < n; i++){
         scanf("%d", &score);
         Hashtable[score]++;
     }
     scanf("%d", &k);
     for(int i = 0; i < k; i++){
         scanf("%d", &score);
        printf("%d", Hashtable[score]);
        if(i < k - 1)
        printf(" ");
     }      

     return 0;
 }