
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ml_line_count; } ;
struct TYPE_7__ {TYPE_1__ b_ml; } ;
struct TYPE_6__ {scalar_t__ w_topline; scalar_t__ w_topfill; int w_wrow; scalar_t__ w_width; int w_virtcol; int w_valid; int w_botline; scalar_t__ w_p_wrap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (scalar_t__,int *,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void
FUNC_6()
{
    int VAR_6;

    if (VAR_4->w_topline == VAR_3->b_ml.ml_line_count



     )
 return;

    FUNC_4();
    VAR_6 = VAR_4->w_wrow - FUNC_2(VAR_4->w_topline);

    if (VAR_4->w_p_wrap



     )
    {
 FUNC_5();
 VAR_6 -= VAR_4->w_virtcol / FUNC_0(VAR_4);
    }
    if (VAR_6 >= VAR_5)
    {





 {



     ++VAR_4->w_topline;
 }
 ++VAR_4->w_botline;
 VAR_4->w_valid &= ~(VAR_2|VAR_1|VAR_0);
    }
}
