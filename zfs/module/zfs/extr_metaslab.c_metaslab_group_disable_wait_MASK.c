
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mg_ms_disabled_lock; int mg_ms_disabled_cv; scalar_t__ mg_disabled_updating; } ;
typedef TYPE_1__ metaslab_group_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(metaslab_group_t *VAR_0)
{
 FUNC_0(FUNC_1(&VAR_0->mg_ms_disabled_lock));
 while (VAR_0->mg_disabled_updating) {
  FUNC_2(&VAR_0->mg_ms_disabled_cv, &VAR_0->mg_ms_disabled_lock);
 }
}
