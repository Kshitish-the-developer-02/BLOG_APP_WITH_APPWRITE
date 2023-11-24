#include <stdio.h>
#include <stdlib.h>

struct node
{
    int vertex;
    struct node *next;
};

int main()
{
    struct node *adjlist[10];
    struct node *curr, *p;

    int n, i, j, x;
    printf("\nenter number of vertex:  ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        adjlist[i] = (struct node *)malloc(sizeof(struct node *));
        adjlist[i]->vertex = i;
        adjlist[i]->next = NULL;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                printf("\nconnect %d to %d??(y/n):   ");
                fflush(stdin);
                x = getchar();
                if (x == 'y')
                {
                    curr = (struct node *)malloc(sizeof(struct node *));
                    curr->vertex = j;
                    curr->next = NULL;

                    p = adjlist[i];
                    while (p->next != NULL)
                    {
                        p = p->next;
                    }
                    p->next = curr;
                }
            }
        }
    }
    print_adjcent_list(*adjlist,n);
    return 0;
}

void  print_adjcent_list(struct node *adjlist,int n){
    int i;
    for(int i=0;i<n;i++){
        struct node *temp;
        temp=adjlist->adjlist[i];
    }

}
