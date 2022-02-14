
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ms_lock; int ms_flush_cv; scalar_t__ ms_flushing; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(metaslab_t *VAR_0)
{
 FUNC_0(FUNC_1(&VAR_0->ms_lock));

 while (VAR_0->ms_flushing)
  FUNC_2(&VAR_0->ms_flush_cv, &VAR_0->ms_lock);
}
