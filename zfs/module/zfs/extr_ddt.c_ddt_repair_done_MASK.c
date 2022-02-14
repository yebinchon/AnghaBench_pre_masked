
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ddt_repair_tree; int ddt_spa; } ;
typedef TYPE_1__ ddt_t ;
struct TYPE_11__ {int * dde_repair_abd; } ;
typedef TYPE_2__ ddt_entry_t ;
typedef int avl_index_t ;


 int * FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ) ;

void
FUNC_6(ddt_t *VAR_0, ddt_entry_t *VAR_1)
{
 avl_index_t VAR_2;

 FUNC_2(VAR_0);

 if (VAR_1->dde_repair_abd != ((void*)0) && FUNC_5(VAR_0->ddt_spa) &&
     FUNC_0(&VAR_0->ddt_repair_tree, VAR_1, &VAR_2) == ((void*)0))
  FUNC_1(&VAR_0->ddt_repair_tree, VAR_1, VAR_2);
 else
  FUNC_4(VAR_1);

 FUNC_3(VAR_0);
}
