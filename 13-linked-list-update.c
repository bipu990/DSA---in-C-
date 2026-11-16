#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *add(int value ,struct node *first)
{
    struct node *new = malloc (sizeof(struct node));
    new->data = value ;
    new->next = NULL;

    if (first == NULL)
    return new;

    struct node *s = first;

    while (s->next != NULL)
    {
        s = s->next;
    }

    s->next = new;

    return first;
}
struct node *updt(int value,int m,struct node *first)
{
    if (first == NULL)
    return  first;

    if (first->data == value)
    {
        first->data = m;

        return first;
    }
    struct node *s = first;

    while (s != NULL)
    {
        if (s->data == value)
        {
            s->data = m;
        }
        s = s->next;
    }
    return first;
}
void display(struct node *first)
{
    if (first == NULL)
    {
        printf ("There is no value.");
        return;
    }
    struct node *p = first;
    while (p!=NULL)
    {
        printf ("%d\n",p->data);
        p = p->next; 
    }
    return;
}
int main ()
{
    int x,y;
    printf ("Input a number : ");
    scanf ("%d",&x);

    struct node *first = NULL;

    printf ("Input the value : \n");
    for (int i=1;i<=x;i++)
    {
        scanf ("%d",&y);
        first = add(y,first);
    }

    int m;
    printf ("Input the value which u want to update : ");
    scanf ("%d",&m);
    int n;
    printf ("Input the value u change :");
    scanf ("%d",&n);

    first = updt(m,n,first);
    display(first);

    return 0;
}
