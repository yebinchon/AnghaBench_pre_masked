
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ml_line_count; } ;
struct TYPE_8__ {TYPE_2__ b_ml; } ;
struct TYPE_5__ {int lnum; } ;
struct TYPE_7__ {TYPE_1__ w_cursor; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int,int*,int *) ;

void
FUNC_1()
{
    if (VAR_1->w_cursor.lnum > VAR_0->b_ml.ml_line_count)
    {






     VAR_1->w_cursor.lnum = VAR_0->b_ml.ml_line_count;
    }
    if (VAR_1->w_cursor.lnum <= 0)
 VAR_1->w_cursor.lnum = 1;
}
