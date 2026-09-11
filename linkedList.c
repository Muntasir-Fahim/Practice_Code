#include <stdio.h>

struct list
{
    int age;

    struct list *listId, *next;
};

struct list *creatList(int id)
{
    struct list *p = (struct list *) malloc (sizeof(struct list));
    p -> listId = id;
    p -> next = NULL;
    return p;
};

void printing(struct list *p){
    p = p ->next;
    while (p != NULL)
    {
        printf("%d ",p ->listId);
        p = p->next;
    }
    
}

int main(){
    struct list *start, *next, *p,*current;
    int id;
    start =  creatList(9999);
    current = start;
    while (1)
    {
        scanf("%d",&id);
        if(id == -100) break;

        p =  creatList(id);
        current -> next = p;
        current = p;
    }
    printing(start);

    
    
}