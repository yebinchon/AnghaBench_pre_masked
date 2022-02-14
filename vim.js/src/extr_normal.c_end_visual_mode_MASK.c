
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ owned; scalar_t__ available; } ;
struct TYPE_6__ {scalar_t__ coladd; } ;
struct TYPE_7__ {int vi_curswant; TYPE_1__ vi_end; int vi_start; void* vi_mode; } ;
struct TYPE_9__ {void* b_visual_mode_eval; TYPE_2__ b_visual; } ;
struct TYPE_8__ {TYPE_1__ w_cursor; int w_curswant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_5__ VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void
FUNC_5()
{
    VAR_3 = VAR_0;






    VAR_7->b_visual.vi_mode = VAR_4;
    VAR_7->b_visual.vi_start = VAR_2;
    VAR_7->b_visual.vi_end = VAR_8->w_cursor;
    VAR_7->b_visual.vi_curswant = VAR_8->w_curswant;
    if (VAR_9)
 VAR_5 = VAR_1;





    FUNC_0();
}
