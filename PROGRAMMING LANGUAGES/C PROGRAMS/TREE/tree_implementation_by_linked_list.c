#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct stack
{
    struct tree *tr;
    struct stack *next;
};

struct tree *root;
struct tree *ptr;
struct tree *curr;
struct stack *s;
struct stack *top = NULL;

void preorder(struct tree *ptr);
void inorder(struct tree *ptr);
void postorder(struct tree *ptr);


void main()
{
    int num;
    printf("enter data for the root node:  ");
    scanf("%d", &num);

    root = (struct tree *)malloc(sizeof(struct tree));
    root->data = num;
    root->left = root->right = NULL;

    ptr = root;

    int flag = 1;
    char chl, chr;

    while (flag == 1)
    {

        printf("\n%d has left node (y/n):   ", ptr->data);
        getchar();
        chl = getchar();
        if (chl == 'y')
        {
            printf("enter data for the  left node of %d:    ", ptr->data);
            scanf("%d", &num);

            curr = (struct tree *)malloc(sizeof(struct tree));
            curr->data = num;
            curr->left = curr->right = NULL;
            ptr->left = curr;
        }

        printf("\n%d has right node(y/n):   ", ptr->data);
        getchar();
        chr = getchar();
        if (chr == 'y')
        {
            printf("enter data for the right node  of %d:  ", ptr->data);
            scanf("%d", &num);

            curr = (struct tree *)malloc(sizeof(struct tree));
            curr->data = num;
            curr->left = curr->right = NULL;
            ptr->right = curr;

            s = (struct stack *)malloc(sizeof(struct stack));
            s->tr = curr;
            s->next = NULL;

            if (top == NULL)
            {
                top = s;
            }

            else
            {
                s->next = top;
                top = s;
            }
        }

        if (chl != 'y' && chr != 'y' && top == NULL)
        {
            flag = 0;
            top = NULL;
        }
        else if (chl != 'y')
        {
            s = top;
            ptr = top->tr;
            top = top->next;
            free(s);
        }
        else
        {
            ptr = ptr->left;
        }
    }
    printf("preorder traversial\n");
    preorder(root);

    printf("\ninorder traversial\n");
    inorder(root);

    printf("\npost order traversial\n");

    postorder(root);
}

void preorder(struct tree *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    printf("%d\t", ptr->data);
    preorder(ptr->left);
    preorder(ptr->right);
}

void inorder(struct tree *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    inorder(ptr->left);
    printf("%d\t", ptr->data);
    inorder(ptr->right);
}
   
void postorder(struct tree *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    postorder(ptr->left);
    postorder(ptr->right);
    printf("%d\t",ptr->data);

}