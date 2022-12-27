#ifndef DOUBLE_LINKEDLIST_H_INCLUDED
#define DOUBLE_LINKEDLIST_H_INCLUDED

struct dnode
{
    struct dnode *prev;
    int info;
    struct dnode *next;
};

int double_linkedList_func();
struct dnode *create_dlist(struct dnode *start);
void display_dlist(struct dnode *start);
struct dnode *add_to_empty_dlist(struct dnode *start, int data);
struct dnode *add_at_beg_dlist(struct dnode *start, int data);
struct dnode *add_at_end_dlist(struct dnode *start, int data);
struct dnode *add_before_dlist(struct dnode *start, int data, int item);
struct dnode *add_after_dlist(struct dnode *start, int data, int item);
struct dnode *del_dlist_node(struct dnode *start, int data);
struct dnode *reverse_dlist(struct dnode *start);


#endif // DOUBLE_LINKEDLIST_H_INCLUDED
