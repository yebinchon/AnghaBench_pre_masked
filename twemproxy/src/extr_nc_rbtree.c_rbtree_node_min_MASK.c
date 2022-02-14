
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbnode {struct rbnode* left; } ;



__attribute__((used)) static struct rbnode *
FUNC_0(struct rbnode *VAR_0, struct rbnode *VAR_1)
{


    while (VAR_0->left != VAR_1) {
        VAR_0 = VAR_0->left;
    }

    return VAR_0;
}
