#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *add(struct node *first, int value)
{
    struct node *new = malloc(sizeof(struct node));
    new->data = value;
    new->next = NULL;

    if (first == NULL)
        return new;

    struct node *s = first;

    while (s->next != NULL)
        s = s->next;

    s->next = new;

    return first;
}

struct node *delet(struct node *first)
{
    if (first == NULL)
        return first;

    struct node *temp = first;
    first = first->next;
    free(temp);

    return first;
}

void display(struct node *first)
{
    struct node *p = first;

    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main()
{
    int x, y;

    scanf("%d", &x);

    struct node *first = NULL;

    for (int i = 1; i <= x; i++)
    {
        scanf("%d", &y);
        first = add(first, y);
    }

    first = delet(first);

    display(first);

    return 0;
}
