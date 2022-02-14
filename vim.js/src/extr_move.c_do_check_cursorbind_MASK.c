
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* coladd; void* col; int lnum; } ;
struct TYPE_6__ {int w_set_curswant; void* w_redr_status; int w_p_scb; void* w_curswant; TYPE_1__ w_cursor; scalar_t__ w_p_diff; scalar_t__ w_p_crb; int * w_buffer; struct TYPE_6__* w_next; } ;
typedef TYPE_2__ win_T ;
typedef int linenr_T ;
typedef void* colnr_T ;
typedef int buf_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int * VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (int *,int ,int *,int ) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 () ;

void
FUNC_5()
{
    linenr_T VAR_9 = VAR_5->w_cursor.lnum;
    colnr_T VAR_10 = VAR_5->w_cursor.col;



    colnr_T VAR_11 = VAR_5->w_curswant;
    int VAR_12 = VAR_5->w_set_curswant;
    win_T *VAR_13 = VAR_5;
    buf_T *VAR_14 = VAR_4;
    int VAR_15;
    for (VAR_5 = VAR_6; VAR_5; VAR_5 = VAR_5->w_next)
    {
 VAR_4 = VAR_5->w_buffer;

 if (VAR_5 != VAR_13 && VAR_5->w_p_crb)
 {
  VAR_5->w_cursor.lnum = VAR_9;
     VAR_5->w_cursor.col = VAR_10;



     VAR_5->w_curswant = VAR_11;
     VAR_5->w_set_curswant = VAR_12;



     VAR_15 = VAR_8;
     VAR_8 = VAR_0;
     FUNC_0();
     VAR_8 = VAR_15;





     FUNC_3(VAR_1);


     if (!VAR_5->w_p_scb)
  FUNC_4();



 }
    }
    VAR_5 = VAR_13;
    VAR_4 = VAR_14;
}
