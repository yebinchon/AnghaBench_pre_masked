
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ w_status_height; scalar_t__ w_buffer; int w_redr_status; struct TYPE_3__* w_next; } ;
typedef TYPE_1__ win_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ) ;

void
FUNC_1()
{
    win_T *VAR_4;

    for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->w_next)
 if (VAR_4->w_status_height != 0 && VAR_4->w_buffer == VAR_2)
 {
     VAR_4->w_redr_status = VAR_0;
     FUNC_0(VAR_1);
 }
}
