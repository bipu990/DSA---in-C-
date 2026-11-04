//Add nodes to end of linked list

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *add(int value ,struct node *first)
{
    struct node *new = malloc (sizeof (struct node));
    new->data = value;
    new->next = NULL;

    if (first == NULL)
    {
        return new;
    }
    struct node *s = first;//int *s=first

    while (s->next != NULL)
    {
        s = s->next;
    }
    s->next = new;  

    return first;
}

void dispaly(struct node *first)
{
    struct node *p = first;
    while (p!=NULL)
    {
        printf ("%d\n",p->data);
        p = p->next;
    }
}

int main ()
{
    int x,y,z;
    scanf ("%d %d %d",&x,&y,&z);

    struct node *first = NULL;

    first = add(x,first);//    first = add(first,x);
    first = add(y,first);
    first = add(z,first);

    dispaly(first);

    return 0;
}
