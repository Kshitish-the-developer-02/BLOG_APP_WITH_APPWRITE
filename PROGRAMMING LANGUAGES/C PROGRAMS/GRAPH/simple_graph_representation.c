#include <stdio.h>
struct node
{
    char vertex;
};
struct graph
{
    struct node nodes[20];
    int adj[20][20];
};

void printf_adjacent_matrix(struct graph g, int n);
int main()
{
    struct graph g;
    int i, j, n;
    char x;
    printf("\nenter number of vertex:  ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        getchar();
        printf("\nEnter vertex values:  ");
        fflush(stdin);
        scanf("%c", &x);
        g.nodes[i].vertex = x;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            getchar();
            printf("\nisthere any edge from %c to %c??(y\n):  ", g.nodes[i].vertex, g.nodes[j].vertex);
            fflush(stdin);
            x = getchar();
            if (x == 'y')
            {
                g.adj[i][j] = 1;
            }
            else
            {
                g.adj[i][j] = 0;
            }
        }
    }
    printf_adjacent_matrix(g, n);
    return 0;
}

void printf_adjacent_matrix(struct graph g, int n)
{
    int i, j;
    printf("\nadjacent matrix is:  ");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", g.adj[i][j]);
        }
    }
}