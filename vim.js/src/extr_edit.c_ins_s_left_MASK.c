
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lnum; scalar_t__ col; } ;
struct TYPE_4__ {int w_set_curswant; TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (long,int ,int ) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5()
{




    FUNC_3();
    if (VAR_4->w_cursor.lnum > 1 || VAR_4->w_cursor.col > 0)
    {
 FUNC_2(&VAR_4->w_cursor);
 (void)FUNC_0(1L, VAR_0, VAR_0);
 VAR_4->w_set_curswant = VAR_3;
    }
    else
 FUNC_4();
}
