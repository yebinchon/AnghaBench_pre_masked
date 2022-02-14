
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ zko_child_count; int zko_kobj; struct TYPE_4__* zko_children; } ;
typedef TYPE_1__ zfs_mod_kobj_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(zfs_mod_kobj_t *VAR_0)
{

 if (VAR_0->zko_child_count != 0) {
  FUNC_0(VAR_0->zko_children);
  for (int VAR_1 = 0; VAR_1 < VAR_0->zko_child_count; VAR_1++)
   FUNC_3(&VAR_0->zko_children[VAR_1]);
 }


 FUNC_1(&VAR_0->zko_kobj);
 FUNC_2(&VAR_0->zko_kobj);
}
