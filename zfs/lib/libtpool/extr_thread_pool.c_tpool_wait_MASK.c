
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tp_flags; int tp_mutex; int tp_waitcv; int * tp_active; int * tp_head; } ;
typedef TYPE_1__ tpool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(tpool_t *VAR_4)
{
 FUNC_0(!FUNC_5(VAR_4));
 FUNC_0(!(VAR_4->tp_flags & (VAR_1 | VAR_0)));

 FUNC_4(&VAR_4->tp_mutex);
 FUNC_2(VAR_3, VAR_4);
 while (VAR_4->tp_head != ((void*)0) || VAR_4->tp_active != ((void*)0)) {
  VAR_4->tp_flags |= VAR_2;
  (void) FUNC_3(&VAR_4->tp_waitcv, &VAR_4->tp_mutex);
  FUNC_0(!(VAR_4->tp_flags & (VAR_1 | VAR_0)));
 }
 FUNC_1(1);
}
