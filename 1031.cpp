# include <cstdio>
int w [18] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 31, 7, 9, 10, 5, 8, 4, 2};
char z[12] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int main(){
    int n;
     scanf("%d", &n);
     bool flag = true;
     char str[20];
     int last = 0;

     for(int i = 0; i < n; i++){
         scanf("%s", str);
         for(int j = 0; j < 17; j++){
         if(!(str[j] >= '0' && str[j] <= '9'))
         break;
         last = last + (str[j] - '0') * w[j];
         }
         if(i < 17){
             flag = false;
             printf("%s\n", str);
         }
         else{
         if(z[last % 11] !=  str[17]){
             flag = false;
             printf("%s\n", str);
         }
         }
         }
     if (flag == true)
     printf("All passed/n");
    return 0;
}