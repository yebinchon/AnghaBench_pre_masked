
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbtree {struct rbnode* sentinel; struct rbnode* root; } ;
struct rbnode {int dummy; } ;


 struct rbnode* FUNC_0 (struct rbnode*,struct rbnode*) ;

struct rbnode *
FUNC_1(struct rbtree *VAR_0)
{
    struct rbnode *VAR_1 = VAR_0->root;
    struct rbnode *VAR_2 = VAR_0->sentinel;



    if (VAR_1 == VAR_2) {
        return ((void*)0);
    }

    return FUNC_0(VAR_1, VAR_2);
}
