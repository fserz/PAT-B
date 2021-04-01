# include <cstdio>
# include <cstring>

int main(){
char str1[65], str2[65], str3[65], str4[65]; 
char week[7][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
gets(str1);
gets(str2);
gets(str3);
gets(str4);

int len1 = strlen(str1);
int len2 = strlen(str2);
int len3 = strlen(str3);
int len4 = strlen(str4);
int i;

for(i = 0; i < len1 && i < len2; i++){
    if(str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G'){
    printf("%s ", week [str1[i] - 'A']);
    break;
    }
}


for( i++; i < len1 && i < len2; i++){
    if(str1[i] == str2[i]){
    if(str1[i] >= '0' && str1[i] <= '9'){
    printf("%02d:", str1[i] - '0');
    break;
    }

    else if(str1[i] >= 'A' && str1[i] <= 'N'){
    printf("%02d:", str1[i] - 'A' + 10);
    break;
    }
    }

}
    
for(int i = 0; i < len3 && i < len4; i++){
    if(str3[i] == str4[i])
    if((str3[i] >= 'a' && str3[i] <= 'z') || (str3[i] >= 'A' &&  str3[i] >= 'Z')){
    printf("%02d", i);
    break;
    }
    
}
    return 0;
}







# include <cstdio>
# include <cstring>

int main (){
    char str1[100], str2[100];
    bool HashTable[128] = {false};
    gets (str1);
    gets (str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char c1, c2;
    int j;

    for(int i = 0; i < len1; i++){
        for(int j = 0; j < len2; j++){
            c1 = str1[i];
            c2 = str2[j];
            if(c1 >= 'a' && c1 <= 'z') c1 -= 32;
            if(c2 >= 'a' && c2 <= 'z') c2 -= 32;
            if(c1 == c2) break;
        }
        
        if(HashTable[c1] == false && j == len2){
            printf("%c", c1);
            HashTable[c1] = true;
        }
    }


    return 0;
}