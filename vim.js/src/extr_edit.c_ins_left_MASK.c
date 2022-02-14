
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lnum; scalar_t__ col; } ;
typedef TYPE_1__ pos_T ;
typedef int colnr_T ;
struct TYPE_5__ {int w_set_curswant; TYPE_1__ w_cursor; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int * FUNC_7 (int ,char) ;

__attribute__((used)) static void
FUNC_8()
{
    pos_T VAR_11;





    FUNC_5();
    VAR_11 = VAR_5->w_cursor;
    if (FUNC_3() == VAR_3)
    {





     FUNC_4(&VAR_11);






    }





    else if (FUNC_7(VAR_7, '[') != ((void*)0) && VAR_5->w_cursor.lnum > 1)
    {
 FUNC_4(&VAR_11);
 --(VAR_5->w_cursor.lnum);
 FUNC_0((colnr_T)VAR_2);
 VAR_5->w_set_curswant = VAR_4;
    }
    else
 FUNC_6();
}
