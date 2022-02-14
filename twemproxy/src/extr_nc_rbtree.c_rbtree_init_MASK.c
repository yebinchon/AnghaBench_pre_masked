
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbtree {struct rbnode* sentinel; struct rbnode* root; } ;
struct rbnode {int dummy; } ;


 int FUNC_0 (struct rbnode*) ;
 int FUNC_1 (struct rbnode*) ;

void
FUNC_2(struct rbtree *VAR_0, struct rbnode *VAR_1)
{
    FUNC_1(VAR_1);
    FUNC_0(VAR_1);
    VAR_0->root = VAR_1;
    VAR_0->sentinel = VAR_1;
}
