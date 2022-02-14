
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int b_p_ro; struct TYPE_6__* b_next; } ;
typedef TYPE_1__ buf_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void
FUNC_3()
{
    buf_T *VAR_5;

    if (!(VAR_2 || VAR_3) || !VAR_4)
 return;
    for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->b_next)
 if (FUNC_0(VAR_5) && !VAR_5->b_p_ro)
 {
     (void)FUNC_2(VAR_5, VAR_0);





 }
}
