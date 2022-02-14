
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int colnr_T ;
struct TYPE_3__ {int w_valid; int w_virtcol; int w_wcol; scalar_t__ w_leftcol; scalar_t__ w_p_wrap; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void
FUNC_4()
{
    colnr_T VAR_2;
    colnr_T VAR_3;
    int VAR_4;

    FUNC_3();
    if (!(VAR_1->w_valid & VAR_0))
    {
 VAR_3 = VAR_1->w_virtcol;
 VAR_2 = FUNC_1();
 VAR_3 += VAR_2;
 VAR_4 = FUNC_0(VAR_1) - VAR_2 + FUNC_2();


 if (VAR_1->w_p_wrap
  && VAR_3 >= (colnr_T)FUNC_0(VAR_1)
  && VAR_4 > 0)

     VAR_3 -= ((VAR_3 - FUNC_0(VAR_1)) / VAR_4 + 1) * VAR_4;
 if (VAR_3 > (int)VAR_1->w_leftcol)
     VAR_3 -= VAR_1->w_leftcol;
 else
     VAR_3 = 0;
 VAR_1->w_wcol = VAR_3;

 VAR_1->w_valid |= VAR_0;
    }
}
