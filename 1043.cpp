# include <cstdio>
# include <cstring>
const int max = 10010;

char str[max], dict[6] = {'P', 'A', 'T', 'e', 's', 't'};
int Hashtable[6] = {0};

int main(){
    gets(str);
    int len = strlen(str), sum = 0;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < 6; j++){
        if(str[i] == dict[j]){
        Hashtable[j]++;
        sum++;
        }
        }
    }

    while (sum > 0)
    {
        for(int i = 0; i < 6; i++){
            if(Hashtable[i] > 0)
            {
                printf("%c", dict[i]);
                Hashtable[i]--;
                sum--;
                        }
            

        }
    }
    


    return 0;
}