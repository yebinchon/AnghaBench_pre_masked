
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ colnr_T ;
struct TYPE_4__ {int w_leftcol; scalar_t__ w_virtcol; void* w_set_curswant; int w_cursor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__*,int *,scalar_t__*) ;
 long VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

int
FUNC_7()
{
    long VAR_6;
    colnr_T VAR_7, VAR_8;
    int VAR_9 = VAR_1;

    FUNC_1();
    VAR_6 = VAR_4->w_leftcol + FUNC_0(VAR_4) - FUNC_3() - 1;
    FUNC_6();





    if (VAR_4->w_virtcol > (colnr_T)(VAR_6 - VAR_5))
    {
 VAR_9 = VAR_3;
 FUNC_2((colnr_T)(VAR_6 - VAR_5));
    }
    else if (VAR_4->w_virtcol < VAR_4->w_leftcol + VAR_5)
    {
 VAR_9 = VAR_3;
 (void)FUNC_2((colnr_T)(VAR_4->w_leftcol + VAR_5));
    }






    FUNC_4(VAR_4, &VAR_4->w_cursor, &VAR_7, ((void*)0), &VAR_8);
    if (VAR_8 > (colnr_T)VAR_6)
    {
 VAR_9 = VAR_3;
 FUNC_2(VAR_7 - 1);
    }
    else if (VAR_7 < VAR_4->w_leftcol)
    {
 VAR_9 = VAR_3;
 if (FUNC_2(VAR_8 + 1) == VAR_0)
 {
     VAR_4->w_leftcol = VAR_7;
     FUNC_1();
 }
    }

    if (VAR_9)
 VAR_4->w_set_curswant = VAR_3;
    FUNC_5(VAR_2);
    return VAR_9;
}
