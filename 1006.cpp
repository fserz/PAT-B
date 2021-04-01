
# include  <cstdio>
int main(){
int n;
scanf("%d", &n);
int num = 0, ans[6];
while(n != 0){
    ans[num] = n % 10;
    n = n / 10;
    num++; 
}
for(int i = num - 1; i >=0 ; i--){
    if(i == 2){
        for(int j = ans[i]; j != 0; j--){
            printf("B");
        }

    }
    else if(i == 1){
        for(int j = ans[i]; j != 0; j--){
            printf("S");
        }

    }
    else{
        for(int k = 1; k <= ans[i]; k++){
            printf("%d", k);
        }
    }
}
return 0;
 }