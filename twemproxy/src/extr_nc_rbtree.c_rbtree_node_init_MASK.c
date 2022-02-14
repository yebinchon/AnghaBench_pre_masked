
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbnode {unsigned long long key; int * data; int * parent; int * right; int * left; } ;



void
FUNC_0(struct rbnode *VAR_0)
{
    VAR_0->left = ((void*)0);
    VAR_0->right = ((void*)0);
    VAR_0->parent = ((void*)0);
    VAR_0->key = 0ULL;
    VAR_0->data = ((void*)0);

}
