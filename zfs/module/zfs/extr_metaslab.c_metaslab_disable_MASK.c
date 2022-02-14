
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ms_disabled; int ms_lock; TYPE_2__* ms_group; } ;
typedef TYPE_1__ metaslab_t ;
struct TYPE_7__ {int mg_ms_disabled_lock; int mg_ms_disabled_cv; int mg_disabled_updating; } ;
typedef TYPE_2__ metaslab_group_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(metaslab_t *VAR_2)
{
 FUNC_0(!FUNC_1(&VAR_2->ms_lock));
 metaslab_group_t *VAR_3 = VAR_2->ms_group;

 FUNC_5(&VAR_3->mg_ms_disabled_lock);
 FUNC_3(VAR_3);
 VAR_3->mg_disabled_updating = VAR_1;
 if (VAR_2->ms_disabled == 0) {
  FUNC_4(VAR_3);
 }
 FUNC_5(&VAR_2->ms_lock);
 VAR_2->ms_disabled++;
 FUNC_6(&VAR_2->ms_lock);

 VAR_3->mg_disabled_updating = VAR_0;
 FUNC_2(&VAR_3->mg_ms_disabled_cv);
 FUNC_6(&VAR_3->mg_ms_disabled_lock);
}
