# include <cstdio>
# include <cstring>

struct bign{
    int d[1010];
    int len;
    bign()
    {
        memset(d, 0, sizeof(d));
        len = 0;
    }
};
bign change(char str[]){
    bign a;
    a.len = strlen(str);
    for(int i = 0; i < a.len; i++){
        a.d[i] = str[a.len - i - 1] - '0';
    }
    return a;
}

bign divid(bign a, int b, int &r){
    bign c;
    c.len = a.len;
    for(int i = a.len - 1; i >= 0; i--){
        r = r * 10 + a.d[i];
        if(r < b) c.d[i] = 0;
        else{
            c.d[i] = r / b;
            r = r % b;
        }
    }
    while(c.len - 1 >= 1 && c.d[c.len - 1] ==0){
        c.len--;
    }
    return c;
} 

void print(bign a){
    for(int i = a.len - 1; i >= 0; i--){
        printf("%d", a.d[i]);
    }
}



int main(){
    char str[1010];
    int b, r = 0;
    scanf("%s%d", str, &b);
    bign a = change(str);
    print (divid(a, b, r));
    printf(" %d\n", r);


    return 0;
}