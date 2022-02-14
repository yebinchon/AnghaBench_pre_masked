
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ddt_lock; int ddt_repair_tree; int ddt_tree; } ;
typedef TYPE_1__ ddt_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(ddt_t *VAR_1)
{
 FUNC_0(FUNC_2(&VAR_1->ddt_tree) == 0);
 FUNC_0(FUNC_2(&VAR_1->ddt_repair_tree) == 0);
 FUNC_1(&VAR_1->ddt_tree);
 FUNC_1(&VAR_1->ddt_repair_tree);
 FUNC_4(&VAR_1->ddt_lock);
 FUNC_3(VAR_0, VAR_1);
}
