
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w_redr_status; scalar_t__ w_status_height; struct TYPE_3__* w_next; } ;
typedef TYPE_1__ win_T ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;

void
FUNC_1()
{
    win_T *VAR_3;

    for (VAR_3 = VAR_2; VAR_3; VAR_3 = VAR_3->w_next)
 if (VAR_3->w_status_height)
 {
     VAR_3->w_redr_status = VAR_0;
     FUNC_0(VAR_1);
 }
}
