#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int nodeid;
    struct Node *left,*right;
};

struct tree
{
    struct Node * nodelist[100];
    int nodecount;
};
struct tree t;

struct Node * createNode(int id){
    int i=0;
    for(i=0; i<t.nodecount; i++){
        if(t.nodelist[i]->nodeid == id){
            return t.nodelist[i];
        }
    }
    struct Node *p = (struct Node *) malloc (sizeof(struct Node));
    p->nodeid = id;
    p->left = NULL;
    p->right = NULL;
    t.nodelist[i] = p;
    t.nodecount++;
    return p;

}

struct Node * getNode(int id){
    for(int i=0; i<t.nodecount; i++){
        if(t.nodelist[i] ->nodeid == id) return t.nodelist[i];
    }
}

void traverse(struct Node *root){
    if(root == NULL) return;
    printf(" %d ",root->nodeid);
    traverse(root ->left);
    traverse(root -> right);
}

int main(){
    int edges,parent,child,marker;
    scanf("%d",&edges);

    struct Node *n1, *n2;

    for(int i=0; i<edges; i++){
        scanf("%d%d%d",&parent,&child,&marker);

        n1 = createNode(parent);
        n2 = createNode(child);

        if(marker == 0){
            n1 ->left = n2;
        }
        else n1->right = n2;

    }

    n1 = getNode(1);
    traverse(n1);
    
    
}