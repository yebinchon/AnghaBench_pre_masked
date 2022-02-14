
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fnum; int mark; } ;
struct TYPE_7__ {int * fname; TYPE_1__ fmark; } ;
typedef TYPE_2__ xfmark_T ;
struct TYPE_10__ {scalar_t__ keepjumps; } ;
struct TYPE_9__ {int b_fnum; } ;
struct TYPE_8__ {int w_jumplistidx; int w_jumplistlen; int w_pcmark; TYPE_2__* w_jumplist; int w_cursor; int w_prev_pcmark; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;

void
FUNC_1()
{
    if (VAR_4 || VAR_5 || VAR_1.keepjumps)
 return;

    VAR_3->w_prev_pcmark = VAR_3->w_pcmark;
    VAR_3->w_pcmark = VAR_3->w_cursor;
}
