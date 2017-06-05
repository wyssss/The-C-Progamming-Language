# include <stdio.h>    
    
int main(void){    
    int a[26];    
    int c;    
    int i;    
    int j;    
        
    for(i = 0; i <26; i++){    
        a[i] = 0;    
    }    
    while((c =getchar()) != EOF){    
        for(i = 'a'; i <= 'z'; i++){    
            if(c == i){    
                a[i - 97]++;    
            }    
        }    
    }    
    for(i = 0; i < 26; i++){    
        if(a[i] != 0){    
            printf("%c  ", i + 97);    
            for(j = 0; j < a[i]; j++){    
                putchar('*');    
            }    
            putchar('\n');    
        }    
    }    
    return 0;    
}    