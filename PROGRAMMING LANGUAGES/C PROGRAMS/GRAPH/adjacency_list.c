#include <stdio.h>
struct node
{
    int vertex;
    struct node *next;
};

int main()
{
    struct node *adjlist[10];
    struct node *curr;
    int n, i, j;
    char x;

    printf("enter number of vertex:  ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        adjlist[i]=(struct node * )malloc(sizeof(struct node));
        adjlist[i]->vertex=i;
        adjlist[i]->next=NULL;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                printf("connect%d to %d??(y/n)",i,j);
                fflsuh(stdin);
                x=getchar();
                if(x=='y'){
                    curr=(struct node *)malloc(sizeof(struct node));
                    curr->vertex=j;
                    curr->next=NULL;

                    p=adjlist[i];
                    while(p->next!=NULL){
                        p=p->next;
                    }

                }
            }
        }
        
    }
    return 0;
}