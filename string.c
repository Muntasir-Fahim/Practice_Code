#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[20] = "c2.3.4d23.34",res[10];
    int cnt = 0,k=0,pnt=0;
    
    for(int i=0;i<=strlen(str);i++){
        if(!(str[i] >= '0' && str[i] <= '9' || str[i] == '.' )){
            if(cnt != 0){
                res[k] = '\0';
                for(int j=0;j<strlen(res);j++){
                    if(res[j] == '.')
                        pnt++;
                }
                if(pnt == 1)
                    printf("%s\n",res);
                cnt = 0;
                k = 0;
                pnt =0;
            }
        }
        else{
            res[k] = str[i];
            k++;
            cnt++;
        }
    }
    
    return 0;
}