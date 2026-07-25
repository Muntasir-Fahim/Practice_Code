#include<stdio.h>

struct student {
    char name[100];
    int code;
    float cgpa;
};

int main(){
    //freopen("input.txt","r",stdin);
    struct student s[10];

    for(int i=0; i<10 ;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].code);
        scanf("%f",&s[i].cgpa);
    }
    float hcg = 0;
    for(int i=0;i<10;i++){
        if(s[i].code == 9){
            if(s[i].cgpa > hcg){
                hcg = s[i].cgpa;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(s[i].code == 9){
            if(s[i].cgpa == hcg){
                printf("%s\n",s[i].name);
            }
        }
    }

}