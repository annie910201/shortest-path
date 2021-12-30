#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#define max 100

/* record the shortest path */
int shortestLen[max+1];

int inputGraph[max+1][3];

struct Node{
    int vertex;
    int dur;
    struct tag_Node* link;
};

struct Node node;
struct Node* graph[max+1];

void push(struct Node* node,int location){
        graph[location]=node;
}



int main(void){
    int vertex=0;
    int start_index=0;
    int node1=0,node2=0,weight=0;
    scanf("%d",&vertex);
    getchar();

   
    
    for(int i=1;i<vertex;i++){
        scanf("%d %d %d",&inputGraph[i][0],&inputGraph[i][1],&inputGraph[i][2]);
        getchar();
        
    }
    getchar();
    scanf("%d",&start_index);

    struct Node* root=(struct Node*)malloc(sizeof(struct Node));
    root->link=NULL;
    root->vertex=start_index;
    root->dur=0;
    push(root,start_index);

    for(int i=1;i<vertex;i++){
        struct Node* tmp=(struct Node*)malloc(sizeof(struct Node));
        if(inputGraph[i][1]==start_index){
            tmp->vertex=inputGraph[i][0];
            tmp->link=graph[inputGraph[i][1]];
            tmp->dur=inputGraph[i][2];
            push(tmp,inputGraph[i][0]);
        }
        else {
            tmp->vertex=inputGraph[i][1];
            tmp->link=graph[inputGraph[i][0]];
            tmp->dur=inputGraph[i][2];
            push(tmp,inputGraph[i][1]);
        }
    }

    for(int i=1;i<=vertex;i++){
        if()
    }




    for(int i=1;i<=vertex;i++){
        printf("%d %d",i,shortestLen[i]);
    }
    
}
