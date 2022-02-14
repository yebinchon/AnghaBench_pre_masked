
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbtree {struct rbnode* sentinel; struct rbnode* root; } ;
struct rbnode {scalar_t__ key; struct rbnode* parent; struct rbnode* left; struct rbnode* right; } ;


 int FUNC_0 (struct rbnode*) ;
 scalar_t__ FUNC_1 (struct rbnode*) ;
 int FUNC_2 (struct rbnode**,struct rbnode*,struct rbnode*) ;
 int FUNC_3 (struct rbnode*) ;
 int FUNC_4 (struct rbnode**,struct rbnode*,struct rbnode*) ;

void
FUNC_5(struct rbtree *VAR_0, struct rbnode *VAR_1)
{
    struct rbnode **VAR_2 = &VAR_0->root;
    struct rbnode *VAR_3 = VAR_0->sentinel;
    struct rbnode *VAR_4, **VAR_5;



    if (*VAR_2 == VAR_3) {
        VAR_1->parent = ((void*)0);
        VAR_1->left = VAR_3;
        VAR_1->right = VAR_3;
        FUNC_0(VAR_1);
        *VAR_2 = VAR_1;
        return;
    }



    VAR_4 = *VAR_2;
    for (;;) {

        VAR_5 = (VAR_1->key < VAR_4->key) ? &VAR_4->left : &VAR_4->right;
        if (*VAR_5 == VAR_3) {
            break;
        }
        VAR_4 = *VAR_5;
    }

    *VAR_5 = VAR_1;
    VAR_1->parent = VAR_4;
    VAR_1->left = VAR_3;
    VAR_1->right = VAR_3;
    FUNC_3(VAR_1);



    while (VAR_1 != *VAR_2 && FUNC_1(VAR_1->parent)) {

        if (VAR_1->parent == VAR_1->parent->parent->left) {
            VAR_4 = VAR_1->parent->parent->right;

            if (FUNC_1(VAR_4)) {
                FUNC_0(VAR_1->parent);
                FUNC_0(VAR_4);
                FUNC_3(VAR_1->parent->parent);
                VAR_1 = VAR_1->parent->parent;
            } else {
                if (VAR_1 == VAR_1->parent->right) {
                    VAR_1 = VAR_1->parent;
                    FUNC_2(VAR_2, VAR_3, VAR_1);
                }

                FUNC_0(VAR_1->parent);
                FUNC_3(VAR_1->parent->parent);
                FUNC_4(VAR_2, VAR_3, VAR_1->parent->parent);
            }
        } else {
            VAR_4 = VAR_1->parent->parent->left;

            if (FUNC_1(VAR_4)) {
                FUNC_0(VAR_1->parent);
                FUNC_0(VAR_4);
                FUNC_3(VAR_1->parent->parent);
                VAR_1 = VAR_1->parent->parent;
            } else {
                if (VAR_1 == VAR_1->parent->left) {
                    VAR_1 = VAR_1->parent;
                    FUNC_4(VAR_2, VAR_3, VAR_1);
                }

                FUNC_0(VAR_1->parent);
                FUNC_3(VAR_1->parent->parent);
                FUNC_2(VAR_2, VAR_3, VAR_1->parent->parent);
            }
        }
    }

    FUNC_0(*VAR_2);
}
