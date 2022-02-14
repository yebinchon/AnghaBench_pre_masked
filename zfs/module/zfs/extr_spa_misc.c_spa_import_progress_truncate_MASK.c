
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pool_name; } ;
typedef TYPE_2__ spa_import_progress_t ;
struct TYPE_7__ {int pl_list; } ;
struct TYPE_9__ {unsigned int size; TYPE_1__ procfs_list; } ;
typedef TYPE_3__ spa_history_list_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(spa_history_list_t *VAR_0, unsigned int VAR_1)
{
 spa_import_progress_t *VAR_2;
 while (VAR_0->size > VAR_1) {
  VAR_2 = FUNC_3(&VAR_0->procfs_list.pl_list);
  if (VAR_2->pool_name)
   FUNC_4(VAR_2->pool_name);
  FUNC_1(VAR_2, sizeof (spa_import_progress_t));
  VAR_0->size--;
 }

 FUNC_0(VAR_1 == 0, FUNC_2(&VAR_0->procfs_list.pl_list));
}
