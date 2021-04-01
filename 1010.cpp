# include<cstdio>
int main(){
    int a[1100] = {0}, k, e, count = 0;
    while(scanf("%d%d", &k, &e) != EOF){
        a[e] = k;
    }
    for(int i = 1; i <= 1000; i++)
    {
        a[i - 1] = a[i] * i;
        a[i] = 0;
        if(a[i - 1] != 0)
        count++;
    }
    if(count == 0)
        printf("0 0");
    else{
        for(int i = 1000; i >= 0; i--){
            if(a[i] != 0){
                printf("%d %d", a[i], i);
                count--;
            if (count != 0)
                printf(" ");}
        }
    }
    
    
    return 0;
}