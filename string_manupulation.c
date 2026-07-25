#include <stdio.h>
#include <string.h>

void printstring (char *str){
    char rstr[100];
    int count=0;
    for(int i=0;i<=strlen(str);i++){
        if(str[i] == ' ' || str[i] == '\0'){
            if(count > 0){
                rstr[count] = '\0';
                printf("%s\n",rstr);
                count = 0;
            }
            
        }
        else{
                rstr[count] = str[i];
                count++;
            }
    }
}

int main(){
    char str[100] = "hello fucking world";
    printstring(str);
}