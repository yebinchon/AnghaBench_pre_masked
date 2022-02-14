
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct rbtree {struct rbnode* sentinel; struct rbnode* root; } ;
struct rbnode {struct rbnode* parent; struct rbnode* left; struct rbnode* right; } ;


 int FUNC_0 (struct rbnode*) ;
 int FUNC_1 (struct rbnode*,struct rbnode*) ;
 scalar_t__ FUNC_2 (struct rbnode*) ;
 scalar_t__ FUNC_3 (struct rbnode*) ;
 int FUNC_4 (struct rbnode**,struct rbnode*,struct rbnode*) ;
 int FUNC_5 (struct rbnode*) ;
 struct rbnode* FUNC_6 (struct rbnode*,struct rbnode*) ;
 int FUNC_7 (struct rbnode*) ;
 int FUNC_8 (struct rbnode**,struct rbnode*,struct rbnode*) ;

void
FUNC_9(struct rbtree *VAR_0, struct rbnode *VAR_1)
{
    struct rbnode **VAR_2 = &VAR_0->root;
    struct rbnode *VAR_3 = VAR_0->sentinel;
    struct rbnode *VAR_4, *VAR_5, *VAR_6;
    uint8_t VAR_7;



    if (VAR_1->left == VAR_3) {
        VAR_5 = VAR_1->right;
        VAR_4 = VAR_1;
    } else if (VAR_1->right == VAR_3) {
        VAR_5 = VAR_1->left;
        VAR_4 = VAR_1;
    } else {
        VAR_4 = FUNC_6(VAR_1->right, VAR_3);
        VAR_5 = VAR_4->right;
    }

    if (VAR_4 == *VAR_2) {
        *VAR_2 = VAR_5;
        FUNC_0(VAR_5);

        FUNC_5(VAR_1);

        return;
    }

    VAR_7 = FUNC_3(VAR_4);

    if (VAR_4 == VAR_4->parent->left) {
        VAR_4->parent->left = VAR_5;
    } else {
        VAR_4->parent->right = VAR_5;
    }

    if (VAR_4 == VAR_1) {
        VAR_5->parent = VAR_4->parent;
    } else {

        if (VAR_4->parent == VAR_1) {
            VAR_5->parent = VAR_4;
        } else {
            VAR_5->parent = VAR_4->parent;
        }

        VAR_4->left = VAR_1->left;
        VAR_4->right = VAR_1->right;
        VAR_4->parent = VAR_1->parent;
        FUNC_1(VAR_4, VAR_1);

        if (VAR_1 == *VAR_2) {
            *VAR_2 = VAR_4;
        } else {
            if (VAR_1 == VAR_1->parent->left) {
                VAR_1->parent->left = VAR_4;
            } else {
                VAR_1->parent->right = VAR_4;
            }
        }

        if (VAR_4->left != VAR_3) {
            VAR_4->left->parent = VAR_4;
        }

        if (VAR_4->right != VAR_3) {
            VAR_4->right->parent = VAR_4;
        }
    }

    FUNC_5(VAR_1);

    if (VAR_7) {
        return;
    }



    while (VAR_5 != *VAR_2 && FUNC_2(VAR_5)) {

        if (VAR_5 == VAR_5->parent->left) {
            VAR_6 = VAR_5->parent->right;

            if (FUNC_3(VAR_6)) {
                FUNC_0(VAR_6);
                FUNC_7(VAR_5->parent);
                FUNC_4(VAR_2, VAR_3, VAR_5->parent);
                VAR_6 = VAR_5->parent->right;
            }

            if (FUNC_2(VAR_6->left) && FUNC_2(VAR_6->right)) {
                FUNC_7(VAR_6);
                VAR_5 = VAR_5->parent;
            } else {
                if (FUNC_2(VAR_6->right)) {
                    FUNC_0(VAR_6->left);
                    FUNC_7(VAR_6);
                    FUNC_8(VAR_2, VAR_3, VAR_6);
                    VAR_6 = VAR_5->parent->right;
                }

                FUNC_1(VAR_6, VAR_5->parent);
                FUNC_0(VAR_5->parent);
                FUNC_0(VAR_6->right);
                FUNC_4(VAR_2, VAR_3, VAR_5->parent);
                VAR_5 = *VAR_2;
            }

        } else {
            VAR_6 = VAR_5->parent->left;

            if (FUNC_3(VAR_6)) {
                FUNC_0(VAR_6);
                FUNC_7(VAR_5->parent);
                FUNC_8(VAR_2, VAR_3, VAR_5->parent);
                VAR_6 = VAR_5->parent->left;
            }

            if (FUNC_2(VAR_6->left) && FUNC_2(VAR_6->right)) {
                FUNC_7(VAR_6);
                VAR_5 = VAR_5->parent;
            } else {
                if (FUNC_2(VAR_6->left)) {
                    FUNC_0(VAR_6->right);
                    FUNC_7(VAR_6);
                    FUNC_4(VAR_2, VAR_3, VAR_6);
                    VAR_6 = VAR_5->parent->left;
                }

                FUNC_1(VAR_6, VAR_5->parent);
                FUNC_0(VAR_5->parent);
                FUNC_0(VAR_6->left);
                FUNC_8(VAR_2, VAR_3, VAR_5->parent);
                VAR_5 = *VAR_2;
            }
        }
    }

    FUNC_0(VAR_5);
}
