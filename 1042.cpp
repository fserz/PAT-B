# include <cstdio>
# include <cstring>
int Hashtable[30] = {0};
const int max = 1010;
char str[max];

int main(){
gets(str);
int len = strlen(str);
for(int i =0; i < len; i++){
if (str[i] >= 'a' && str[i] <= 'z'){
    Hashtable[str[i] - 'a']++;
}
else if (str[i] >= 'A' && str [i] <= 'Z')
{
    Hashtable[str[i] - 'A']++;
}
}
int k = 0;
for(int i = 0;i <26; i++){
    if(Hashtable[i] > Hashtable[k])
    {
        k = i;
    }
}
printf("%c %d\n",k + 'a', Hashtable[k]);

    return 0;
}