#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *add(struct node *first,int value)
{
    struct node *new = malloc(sizeof(struct node));
    new->data = value;
    new->next = NULL;

    if (first == NULL)
    {
        return new;
    }
    struct node *s = first;
    while (s->next!=NULL)
    {
        s = s->next;
    }
    s->next = new;

    return first;
}
struct node *delet(int value, struct node *first) // my logic ......................
{
    struct node *p = first;

    if (first == NULL)
        return first;

    if (first->data == value)
    {
        struct node *temp = first;
        first = first->next;
        free(temp);
        return first;
    }

    while (p->next != NULL)
    {
        if (p->next->data == value)
        {
            struct node *temp = p->next;
            p->next = temp->next;
            free(temp);
            return first;
        }
        else
        {
            p = p->next;
        }
    }

    return first;
}
void display(struct node *first)
{
    struct node *t = first;
    printf ("Now the values are : \n");
    while (t != NULL)
    {
        printf ("%d\n",t->data);
        t = t->next;
    }
return ;
}

int main ()
{
    int x,y;
    printf ("Input a number : ");
    scanf ("%d",&x);

    struct node *first = NULL;
    printf ("Input the value :\n");
    for (int i=0;i<x;i++)
    {
        scanf ("%d",&y);
        first = add(first,y);
    }
    int m;
    printf ("Input the value for delete : ");
    scanf ("%d",&m);
    first = delet(m,first);

    display(first);

    return 0;
}
