#include <stdio.h>
#include <stdlib.h>

struct Node{
    int nodeId;
    int ns[100];
    int ncount;
    int weight[100];
};

int totalWeight = 0;
int totalPath = 0;
int current = 9999;
int currentPath[100];
int pathIdx=0;

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

void addNeighbour(int mainNode, int nei,int weight){
    struct Node *p = getNode(mainNode);

    int i;

    for(i=0; i<p->ncount; i++){
        if(p->ns[i] == nei) return;
    }

    p->ns[i] = nei;
    p -> weight[i] = weight;
    p->ncount++;
}

void printpath (int *path, int pncount)
{
    printf ("\nPath: ");
    for (int i=0;i<pncount;i++) { printf (" %d ", path[i]); }
    printf("\n%d",totalWeight);
    
    if(totalWeight < current){
        current = totalWeight;
        int i;
        for(i=0;i<pncount;i++){
            currentPath[i] = path[i];
        }
        pathIdx = i;
    }
}

int isinpath (int * path, int pncount, int n)
{
    for (int i =0;i<pncount;i++)
    {
        if (path[i]==n) return 1;
    }
    return 0;
}


void findpath (int s, int d, int *path, int pncount)
{
    if (s == d)
    {
        path[pncount] = d;
        pncount++;
        printpath (path, pncount);
        totalPath++;
        return;
    }
    else
    {
        int ip = isinpath (path, pncount, s);
        if (ip == 1) return;
        else
        {
            path[pncount] = s;
            pncount = pncount+1;

            struct Node *p = getNode (s);
            for (int i =0;i<p->ncount;i++)
            {
                int nei = p->ns[i];
                totalWeight += p->weight[i];
                findpath(nei, d, path, pncount);
                totalWeight -= p->weight[i];
            }
        }
    }
}

void pathPrint(int *p){
    printf("\nShortest path: ");
    int i=0;
    for(int i=0; i<pathIdx; i++){
        printf("%d ",p[i]);
    }
}

int main(){
    int edgecount, n1, n2,weight;
    int path[100];
    scanf ("%d", &edgecount);
    for (int i=0; i<edgecount; i++)
    {
        scanf ("%d%d%d", &n1, &n2,&weight);
        createNode (n1);
        createNode (n2);
        addNeighbour(n1, n2,weight);
        addNeighbour(n2, n1,weight);
    }
    findpath (1, 5, path, 0);
    printf("\n Total path = %d",totalPath);
    pathPrint(currentPath);

}