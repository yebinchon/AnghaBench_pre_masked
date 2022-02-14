
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {long lnum; scalar_t__ fill; scalar_t__ height; } ;
typedef TYPE_3__ lineoff_T ;
typedef long linenr_T ;
struct TYPE_10__ {long ml_line_count; } ;
struct TYPE_14__ {TYPE_1__ b_ml; } ;
struct TYPE_11__ {int lnum; } ;
struct TYPE_13__ {int w_valid; long w_topline; int w_topfill; int w_botline; int w_scbind_pos; int w_height; int w_empty_rows; scalar_t__ w_skipcol; TYPE_2__ w_cursor; scalar_t__ w_filler_rows; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 () ;
 TYPE_7__* VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_4 (TYPE_4__*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (long,long*,long*) ;
 int VAR_10 ;
 long VAR_11 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;

void
FUNC_15()
{
    long VAR_12;
    int VAR_13;
    int VAR_14;
    linenr_T VAR_15;






    int VAR_16 = VAR_0;
    int VAR_17 = VAR_0;




    if (!FUNC_8(VAR_2))
 return;

    FUNC_2(VAR_8);
    if (VAR_8->w_valid & VAR_6)
 return;







    VAR_15 = VAR_8->w_topline;







    if (FUNC_1())
    {
 if (VAR_8->w_topline != 1)
     FUNC_7(VAR_1);
 VAR_8->w_topline = 1;
 VAR_8->w_botline = 2;
 VAR_8->w_valid |= VAR_4|VAR_5;



    }





    else
    {
 if (VAR_8->w_topline > 1)
 {



     if (VAR_8->w_cursor.lnum < VAR_8->w_topline)
  VAR_16 = VAR_2;
     else if (FUNC_3())
  VAR_16 = VAR_2;
 }







 if (VAR_16)
 {
     VAR_13 = VAR_8->w_height / 2 - 1;
     if (VAR_13 < 2)
  VAR_13 = 2;
  VAR_14 = VAR_8->w_topline + VAR_11 - VAR_8->w_cursor.lnum;




     if (VAR_14 >= VAR_13)
  FUNC_10(VAR_0);
     else
     {
  FUNC_11(FUNC_12(), VAR_0);
  VAR_17 = VAR_2;
     }
 }

 else
 {




     VAR_17 = VAR_2;
 }
    }
    if (VAR_17)
    {
 if (!(VAR_8->w_valid & VAR_5))
     FUNC_13();

 if (VAR_8->w_botline <= VAR_7->b_ml.ml_line_count)
 {
     if (VAR_8->w_cursor.lnum < VAR_8->w_botline)
     {
       if (((long)VAR_8->w_cursor.lnum
          >= (long)VAR_8->w_botline - VAR_11



   ))
       {
  lineoff_T VAR_18;




  VAR_14 = VAR_8->w_empty_rows;
  VAR_18.lnum = VAR_8->w_cursor.lnum;
  VAR_18.height = 0;
  while (VAR_18.lnum < VAR_8->w_botline



   )
  {
      VAR_14 += VAR_18.height;
      if (VAR_14 >= VAR_11)
   break;
      FUNC_0(&VAR_18);
  }
  if (VAR_14 >= VAR_11)

      VAR_17 = VAR_0;
       }
       else

    VAR_17 = VAR_0;
     }
     if (VAR_17)
     {
      VAR_12 = VAR_8->w_cursor.lnum - VAR_8->w_botline
           + 1 + VAR_11;
  if (VAR_12 <= VAR_8->w_height + 1)
      FUNC_9(FUNC_12(), VAR_0);
  else
      FUNC_10(VAR_0);
     }
 }
    }
    VAR_8->w_valid |= VAR_6;




    if (VAR_8->w_topline != VAR_15



     )
    {
 VAR_9 = -1;
 if (VAR_8->w_skipcol != 0)
 {
     VAR_8->w_skipcol = 0;
     FUNC_7(VAR_1);
 }
 else
     FUNC_7(VAR_3);

 if (VAR_8->w_cursor.lnum == VAR_8->w_topline)
     FUNC_14();
    }




}
