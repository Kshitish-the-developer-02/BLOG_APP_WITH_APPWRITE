#include <stdio.h>
struct node
{
    char vertex;
    int status;
};

struct graph
{
    struct node nodes[20];
    int adj[10][10];
};

int main()
{
    struct graph g;
    int i, j, n;
    char ch;
    printf("\nenter the number of vertex you want to insert:   ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\nenter vertex values:  ");
        fflush(stdin);
        scanf("%c",&ch);
        g.nodes[i].vertex=ch;

    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nis there any edge from %c to %c??(y\n):   ",g.nodes[i].vertex,g.nodes[j].vertex);
            fflush(stdin);
            ch=getchar();
            if(ch=='y'){
                
            }            
        }
    }

}