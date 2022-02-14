
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct node {struct node* parent; struct node* path; scalar_t__ child; scalar_t__ object_managers; scalar_t__ enumerators; scalar_t__ vtables; scalar_t__ callbacks; } ;
struct TYPE_4__ {int nodes; } ;
typedef TYPE_1__ sd_bus ;


 int FUNC_0 (int ,scalar_t__,struct node*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct node*) ;
 struct node* FUNC_4 (int ,struct node*) ;
 int VAR_0 ;

void FUNC_5(sd_bus *VAR_1, struct node *VAR_2) {
        FUNC_1(VAR_1);

        if (!VAR_2)
                return;

        if (VAR_2->child ||
            VAR_2->callbacks ||
            VAR_2->vtables ||
            VAR_2->enumerators ||
            VAR_2->object_managers)
                return;

        FUNC_2(FUNC_4(VAR_1->nodes, VAR_2->path) == VAR_2);

        if (VAR_2->parent)
                FUNC_0(VAR_0, VAR_2->parent->child, VAR_2);

        FUNC_3(VAR_2->path);
        FUNC_5(VAR_1, VAR_2->parent);
        FUNC_3(VAR_2);
}
