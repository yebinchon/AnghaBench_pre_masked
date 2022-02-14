
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int zl_stop_sync; int zl_cv_suspend; int zl_lock; int zl_issuer_lock; TYPE_1__* zl_itxg; int zl_itx_commit_list; int zl_lwb_list; int zl_suspending; int zl_suspend; } ;
typedef TYPE_2__ zilog_t ;
struct TYPE_5__ {int itxg_lock; scalar_t__ itxg_itxs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

void
FUNC_8(zilog_t *VAR_1)
{
 int VAR_2;

 VAR_1->zl_stop_sync = 1;

 FUNC_1(VAR_1->zl_suspend);
 FUNC_1(VAR_1->zl_suspending);

 FUNC_0(FUNC_5(&VAR_1->zl_lwb_list));
 FUNC_4(&VAR_1->zl_lwb_list);

 FUNC_0(FUNC_5(&VAR_1->zl_itx_commit_list));
 FUNC_4(&VAR_1->zl_itx_commit_list);

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {







  if (VAR_1->zl_itxg[VAR_2].itxg_itxs)
   FUNC_7(VAR_1->zl_itxg[VAR_2].itxg_itxs);
  FUNC_6(&VAR_1->zl_itxg[VAR_2].itxg_lock);
 }

 FUNC_6(&VAR_1->zl_issuer_lock);
 FUNC_6(&VAR_1->zl_lock);

 FUNC_2(&VAR_1->zl_cv_suspend);

 FUNC_3(VAR_1, sizeof (zilog_t));
}
