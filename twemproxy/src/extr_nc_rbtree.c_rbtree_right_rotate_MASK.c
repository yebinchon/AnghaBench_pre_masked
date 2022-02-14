
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbnode {struct rbnode* parent; struct rbnode* right; struct rbnode* left; } ;



__attribute__((used)) static void
FUNC_0(struct rbnode **VAR_0, struct rbnode *VAR_1,
                    struct rbnode *VAR_2)
{
    struct rbnode *VAR_3;

    VAR_3 = VAR_2->left;
    VAR_2->left = VAR_3->right;

    if (VAR_3->right != VAR_1) {
        VAR_3->right->parent = VAR_2;
    }

    VAR_3->parent = VAR_2->parent;

    if (VAR_2 == *VAR_0) {
        *VAR_0 = VAR_3;
    } else if (VAR_2 == VAR_2->parent->right) {
        VAR_2->parent->right = VAR_3;
    } else {
        VAR_2->parent->left = VAR_3;
    }

    VAR_3->right = VAR_2;
    VAR_2->parent = VAR_3;
}
