#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void top_down(struct node *);
void bottom_up(struct node *);



int main()
{
    struct node *head=NULL;
    struct node *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l, *m, *n, *o;

    a = (struct node *)malloc(sizeof(struct node));
	b = (struct node *)malloc(sizeof(struct node));
	c = (struct node *)malloc(sizeof(struct node));
	d = (struct node *)malloc(sizeof(struct node));
	e = (struct node *)malloc(sizeof(struct node));
	f = (struct node *)malloc(sizeof(struct node));
	g = (struct node *)malloc(sizeof(struct node));
	h = (struct node *)malloc(sizeof(struct node));
	i = (struct node *)malloc(sizeof(struct node));
	j = (struct node *)malloc(sizeof(struct node));
	k = (struct node *)malloc(sizeof(struct node));
	l = (struct node *)malloc(sizeof(struct node));
	m = (struct node *)malloc(sizeof(struct node));
	n = (struct node *)malloc(sizeof(struct node));
	o = (struct node *)malloc(sizeof(struct node));

    head=a;

    a->data = 1;
	a->left = b;
	a->right = c;
	

	b->data = 2;
	b->left = d;
	b->right = e;

	c->data = 3;
	c->left = f;
	c->right = g;


	d->data = 4;
	d->left = h;
	d->right = i;

	e->data = 5;
	e->left = j;
	e->right = k;

	f->data = 6;
	f->left = l;
	f->right = m;

	g->data = 7;
	g->left = n;
	g->right = o;

	h->data = 8;
	h->left = NULL;
	h->right = NULL;

	i->data = 9;
	i->left = NULL;
	i->right = NULL;

	j->data = 10;
	j->left = NULL;
	j->right = NULL;

	k->data = 11;
	k->left = NULL;
	k->right = NULL;

	l->data = 12;
	l->left = NULL;
	l->right = NULL;

	m->data = 13;
	m->left = NULL;
	m->right = NULL;

	n->data = 14;
	n->left = NULL;
	n->right = NULL;

	o->data = 15;
	o->left = NULL;
	o->right = NULL;

    printf("Printing two variants of tree 1.Top-down approach 2.Bottom-up approach\n");
    printf("\n");

    printf("1.Top-down approach\n");
    top_down(head);
    printf("\n");
    printf("\n");

    printf("2.Bottom-up approach\n");
    bottom_up(head);
    printf("\n");
    printf("\n");


    return 0;

}


void top_down(struct node *head)
{
    if(head==NULL)
    {
        printf("\nEmpty\n");
    }
    printf("( %d, ", head->data);
    if(head->left==NULL)
    {
        return;
    }
    else
    {
        printf("%d, %d, ", head->left->data, head->right->data);
    }
    
    if(head->left->left==NULL)
    {
        return;
    }
    else
    {
        printf("%d, ", head->left->left->data);
        printf("%d, ", head->right->right->data);
        printf("%d, ", head->left->right->data);
        printf("%d, ", head->right->right->data);
    }

    if(head->left->left->left == NULL)
    {
		return;
    }
	else
	{	
		printf("%d, ", head->left->left->left->data);	
		printf("%d, ", head->right->right->right->data);
		
		printf("%d, ", head->left->left->right->data);
		printf("%d, ", head->right->right->left->data);

		printf("%d, ", head->left->right->left->data);
		printf("%d, ", head->right->left->right->data);

		printf("%d, ", head->left->right->right->data);
		printf("%d )", head->right->left->left->data);
	}


}


void bottom_up(struct node *head)
{

	if(head == NULL)
	{
		printf("Empty!\n");
	}
    if(head->left->left->left == NULL)
    {
        return;
    }
	else
	{	
		printf("( %d, ", head->left->left->left->data);	
		printf("%d, ", head->right->right->right->data);
		
		printf("%d, ", head->left->left->right->data);
		printf("%d, ", head->right->right->left->data);

		printf("%d, ", head->left->right->left->data);
		printf("%d, ", head->right->left->right->data);

		printf("%d, ", head->left->right->right->data);
		printf("%d, ", head->right->left->left->data);
	}
    if(head->left->left == NULL)
    {
        return;
    }
	else
	{	
		printf("%d, ", head->left->left->data);	
		printf("%d, ", head->right->right->data);
		printf("%d, ", head->left->right->data);
		printf("%d, ", head->right->left->data);
	}
    if(head->left == NULL)
    {
        return;
    }
	else
    {
		printf("%d, %d, ", head->left->data, head->right->data);
    }
	printf("%d )", head->data);
}
