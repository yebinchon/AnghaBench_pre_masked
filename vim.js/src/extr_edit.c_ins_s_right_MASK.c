
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ml_line_count; } ;
struct TYPE_8__ {TYPE_1__ b_ml; } ;
struct TYPE_6__ {scalar_t__ lnum; } ;
struct TYPE_7__ {int w_set_curswant; TYPE_2__ w_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (long,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6()
{




    FUNC_4();
    if (VAR_6->w_cursor.lnum < VAR_5->b_ml.ml_line_count
     || FUNC_2() != VAR_3)
    {
 FUNC_3(&VAR_6->w_cursor);
 (void)FUNC_1(1L, VAR_0, 0);
 VAR_6->w_set_curswant = VAR_4;
    }
    else
 FUNC_5();
}
