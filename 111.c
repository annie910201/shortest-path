#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#define max 100

/* record the shortest path */
int shortestLen[max+1];

int inputGraph[max+1][3];//
int top=-1;

struct Node{
    int vertex;
    struct tag_Node* link;
};

struct Node node;
struct Node* graph[max+1];

void push(struct Node* node,int location){
        graph[location]=node;
    
}

// int pop(struct Node* node,int location){
//     if(top>0){
//         graph[location]=node;
//         free(node);
//         return top;
//     }
// }

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

    for(int i=1;i<vertex;i++){
        struct Node* root=(struct Node*)malloc(sizeof(struct Node));
        struct Node* tmp=(struct Node*)malloc(sizeof(struct Node));
        if(inputGraph[i][0]==start_index){
            root->link=NULL;
            root->vertex=inputGraph[i][0];
            push(root));
        }
        else if(inputGraph[i][1]==start_index){
            tmp->link=NULL;
            tmp->vertex=inputGraph[i][0];
            push(tmp);
        }
    }




    for(int i=1;i<=vertex;i++){
        printf("%d %d",i,shortestLen[i]);
    }
    
}
