#include <stdio.h>
#include <stdlib.h>

struct Node{
    int nodeId;
    int ns[100];
    int ncount;
};

struct graph{
    struct Node *nodeList[100];
    int nodeCount;

}g;

void createNode (int id){
    int i;
    for(i=0; i<g.nodeCount; i++){
        if(g.nodeList[i] ->nodeId == id) return;
    }

    struct Node *newNode = (struct Node *) malloc (sizeof(struct Node));
    newNode ->nodeId = id;
    newNode ->ncount = 0;
    g.nodeList[i] = newNode;
    g.nodeCount++;
}

struct Node * getNode(int id){
    for(int i=0; i<g.nodeCount; i++){
        if(g.nodeList[i]->nodeId == id) return g.nodeList[i];
    }
    return NULL;
}

void addNeighbour(int mainNode, int nei){
    struct Node *p = getNode(mainNode);

    int i;

    for(i=0; i<p->ncount; i++){
        if(p->ns[i] == nei) return;
    }

    p->ns[i] = nei;
    p->ncount++;
}

int main(){
    int edgecount, n1, n2;
    int path[100];
    scanf ("%d", &edgecount);
    for (int i=0; i<edgecount; i++)
    {
        scanf ("%d%d", &n1, &n2);
        createnode (n1);
        createnode (n2);
        addneighbour(n1, n2);
        addneighbour(n2, n1);
    }


}