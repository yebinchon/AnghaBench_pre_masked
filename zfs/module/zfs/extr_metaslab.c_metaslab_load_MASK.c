
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ms_load_cv; scalar_t__ ms_loading; int ms_lock; TYPE_1__* ms_group; scalar_t__ ms_loaded; scalar_t__ ms_flushing; int ms_condensing; } ;
typedef TYPE_2__ metaslab_t ;
struct TYPE_11__ {int mc_spa; } ;
struct TYPE_9__ {TYPE_3__* mg_class; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int ) ;

int
FUNC_9(metaslab_t *VAR_2)
{
 FUNC_0(FUNC_1(&VAR_2->ms_lock));





 FUNC_6(VAR_2);
 if (VAR_2->ms_loaded)
  return (0);
 FUNC_2(!VAR_2->ms_loading);
 FUNC_0(!VAR_2->ms_condensing);







 VAR_2->ms_loading = VAR_1;






 if (VAR_2->ms_flushing)
  FUNC_4(VAR_2);






 FUNC_0(!VAR_2->ms_loaded);






 if (FUNC_8(VAR_2->ms_group->mg_class->mc_spa) ==
     VAR_2->ms_group->mg_class) {
  FUNC_7(VAR_2->ms_group->mg_class);
 }

 int VAR_3 = FUNC_5(VAR_2);

 FUNC_0(FUNC_1(&VAR_2->ms_lock));
 VAR_2->ms_loading = VAR_0;
 FUNC_3(&VAR_2->ms_load_cv);

 return (VAR_3);
}
