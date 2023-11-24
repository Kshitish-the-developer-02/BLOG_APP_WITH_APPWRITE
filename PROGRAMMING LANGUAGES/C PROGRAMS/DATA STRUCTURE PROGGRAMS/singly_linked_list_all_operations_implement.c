#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int value)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = head;
    head = new_node;
    printf("%d inserted successfully.\n", value);
}

void delete(int value)
{
    if (head == NULL)
    {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node *current_node = head;
    struct Node *prev_node = NULL;

    while (current_node != NULL)
    {
        if (current_node->data == value)
        {
            if (prev_node == NULL)
            {
                head = current_node->next;
            }
            else
            {
                prev_node->next = current_node->next;
            }
            free(current_node);
            printf("%d deleted successfully.\n", value);
            return;
        }
        prev_node = current_node;
        current_node = current_node->next;
    }

    printf("%d not found in list. Cannot delete.\n", value);
}

void display()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *current_node = head;

    printf("List: ");
    while (current_node != NULL)
    {
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to insert: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            // printf("Enter the value to delete: ");
            // scanf("%d", &value);
            delete (value);
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program.\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    }

    return 0;
}
