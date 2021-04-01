# include<cstdio>
int main(){
    int c1, c2, c3;
    scanf("%d%d", &c1, &c2);
    c3 = (c2 - c1) / 100;
    int hh, mm, ss;
    hh = c3 / 3600;
    mm = (c3 % 3600) / 60;
    ss = (c3 % 60);
    if(c3 % 100 >= 50)
        ss = ss + 1;
    
   printf("%02d:%02d:%02d", hh, mm, ss);
    return 0;
    
}