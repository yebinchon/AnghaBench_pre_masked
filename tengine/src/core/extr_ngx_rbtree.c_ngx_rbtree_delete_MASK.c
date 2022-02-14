
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_20__ {TYPE_2__* sentinel; TYPE_2__* root; } ;
typedef TYPE_1__ ngx_rbtree_t ;
struct TYPE_21__ {struct TYPE_21__* parent; struct TYPE_21__* left; struct TYPE_21__* right; scalar_t__ key; } ;
typedef TYPE_2__ ngx_rbtree_node_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__**,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__**,TYPE_2__*,TYPE_2__*) ;

void
FUNC_8(ngx_rbtree_t *VAR_0, ngx_rbtree_node_t *VAR_1)
{
    ngx_uint_t VAR_2;
    ngx_rbtree_node_t **VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;



    VAR_3 = &VAR_0->root;
    VAR_4 = VAR_0->sentinel;

    if (VAR_1->left == VAR_4) {
        VAR_6 = VAR_1->right;
        VAR_5 = VAR_1;

    } else if (VAR_1->right == VAR_4) {
        VAR_6 = VAR_1->left;
        VAR_5 = VAR_1;

    } else {
        VAR_5 = FUNC_6(VAR_1->right, VAR_4);

        if (VAR_5->left != VAR_4) {
            VAR_6 = VAR_5->left;
        } else {
            VAR_6 = VAR_5->right;
        }
    }

    if (VAR_5 == *VAR_3) {
        *VAR_3 = VAR_6;
        FUNC_0(VAR_6);


        VAR_1->left = ((void*)0);
        VAR_1->right = ((void*)0);
        VAR_1->parent = ((void*)0);
        VAR_1->key = 0;

        return;
    }

    VAR_2 = FUNC_3(VAR_5);

    if (VAR_5 == VAR_5->parent->left) {
        VAR_5->parent->left = VAR_6;

    } else {
        VAR_5->parent->right = VAR_6;
    }

    if (VAR_5 == VAR_1) {

        VAR_6->parent = VAR_5->parent;

    } else {

        if (VAR_5->parent == VAR_1) {
            VAR_6->parent = VAR_5;

        } else {
            VAR_6->parent = VAR_5->parent;
        }

        VAR_5->left = VAR_1->left;
        VAR_5->right = VAR_1->right;
        VAR_5->parent = VAR_1->parent;
        FUNC_1(VAR_5, VAR_1);

        if (VAR_1 == *VAR_3) {
            *VAR_3 = VAR_5;

        } else {
            if (VAR_1 == VAR_1->parent->left) {
                VAR_1->parent->left = VAR_5;
            } else {
                VAR_1->parent->right = VAR_5;
            }
        }

        if (VAR_5->left != VAR_4) {
            VAR_5->left->parent = VAR_5;
        }

        if (VAR_5->right != VAR_4) {
            VAR_5->right->parent = VAR_5;
        }
    }


    VAR_1->left = ((void*)0);
    VAR_1->right = ((void*)0);
    VAR_1->parent = ((void*)0);
    VAR_1->key = 0;

    if (VAR_2) {
        return;
    }



    while (VAR_6 != *VAR_3 && FUNC_2(VAR_6)) {

        if (VAR_6 == VAR_6->parent->left) {
            VAR_7 = VAR_6->parent->right;

            if (FUNC_3(VAR_7)) {
                FUNC_0(VAR_7);
                FUNC_4(VAR_6->parent);
                FUNC_5(VAR_3, VAR_4, VAR_6->parent);
                VAR_7 = VAR_6->parent->right;
            }

            if (FUNC_2(VAR_7->left) && FUNC_2(VAR_7->right)) {
                FUNC_4(VAR_7);
                VAR_6 = VAR_6->parent;

            } else {
                if (FUNC_2(VAR_7->right)) {
                    FUNC_0(VAR_7->left);
                    FUNC_4(VAR_7);
                    FUNC_7(VAR_3, VAR_4, VAR_7);
                    VAR_7 = VAR_6->parent->right;
                }

                FUNC_1(VAR_7, VAR_6->parent);
                FUNC_0(VAR_6->parent);
                FUNC_0(VAR_7->right);
                FUNC_5(VAR_3, VAR_4, VAR_6->parent);
                VAR_6 = *VAR_3;
            }

        } else {
            VAR_7 = VAR_6->parent->left;

            if (FUNC_3(VAR_7)) {
                FUNC_0(VAR_7);
                FUNC_4(VAR_6->parent);
                FUNC_7(VAR_3, VAR_4, VAR_6->parent);
                VAR_7 = VAR_6->parent->left;
            }

            if (FUNC_2(VAR_7->left) && FUNC_2(VAR_7->right)) {
                FUNC_4(VAR_7);
                VAR_6 = VAR_6->parent;

            } else {
                if (FUNC_2(VAR_7->left)) {
                    FUNC_0(VAR_7->right);
                    FUNC_4(VAR_7);
                    FUNC_5(VAR_3, VAR_4, VAR_7);
                    VAR_7 = VAR_6->parent->left;
                }

                FUNC_1(VAR_7, VAR_6->parent);
                FUNC_0(VAR_6->parent);
                FUNC_0(VAR_7->left);
                FUNC_7(VAR_3, VAR_4, VAR_6->parent);
                VAR_6 = *VAR_3;
            }
        }
    }

    FUNC_0(VAR_6);
}
