
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ liveJobs; int mutex; int cond; } ;
typedef TYPE_1__ COVER_best_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(COVER_best_t *VAR_0) {
  if (!VAR_0) {
    return;
  }
  FUNC_1(&VAR_0->mutex);
  while (VAR_0->liveJobs != 0) {
    FUNC_0(&VAR_0->cond, &VAR_0->mutex);
  }
  FUNC_2(&VAR_0->mutex);
}
