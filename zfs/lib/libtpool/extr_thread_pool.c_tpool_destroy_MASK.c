
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tp_flags; scalar_t__ tp_current; int tp_mutex; int tp_busycv; int tp_waitcv; TYPE_2__* tp_active; int tp_workcv; } ;
typedef TYPE_1__ tpool_t ;
struct TYPE_8__ {int tpa_tid; struct TYPE_8__* tpa_next; } ;
typedef TYPE_2__ tpool_active_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;

void
FUNC_9(tpool_t *VAR_5)
{
 tpool_active_t *VAR_6;

 FUNC_0(!FUNC_8(VAR_5));
 FUNC_0(!(VAR_5->tp_flags & (VAR_1 | VAR_0)));

 FUNC_7(&VAR_5->tp_mutex);
 FUNC_4(VAR_4, VAR_5);


 VAR_5->tp_flags |= VAR_1;
 VAR_5->tp_flags &= ~VAR_2;
 (void) FUNC_5(&VAR_5->tp_workcv);


 for (VAR_6 = VAR_5->tp_active; VAR_6; VAR_6 = VAR_6->tpa_next)
  (void) FUNC_2(VAR_6->tpa_tid);


 while (VAR_5->tp_active != ((void*)0)) {
  VAR_5->tp_flags |= VAR_3;
  (void) FUNC_6(&VAR_5->tp_waitcv, &VAR_5->tp_mutex);
 }


 while (VAR_5->tp_current != 0)
  (void) FUNC_6(&VAR_5->tp_busycv, &VAR_5->tp_mutex);

 FUNC_3(1);
 FUNC_1(VAR_5);
}
