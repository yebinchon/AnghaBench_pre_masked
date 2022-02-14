
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {long lnum; long col; scalar_t__ coladd; } ;
struct TYPE_13__ {TYPE_3__ w_cursor; TYPE_2__* w_buffer; } ;
typedef TYPE_4__ win_T ;
struct TYPE_14__ {TYPE_4__* win; } ;
typedef TYPE_5__ WindowObject ;
struct TYPE_10__ {long ml_line_count; } ;
struct TYPE_11__ {TYPE_1__ b_ml; } ;
typedef int PyObject ;


 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,long*,int) ;
 int FUNC_3 (int *,char*,long*,long*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_4__*) ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(WindowObject *VAR_8, char *VAR_9, PyObject *VAR_10)
{
    if (FUNC_0(VAR_8))
 return -1;

    if (FUNC_11(VAR_9, "buffer") == 0)
    {
 FUNC_4(VAR_3, FUNC_1("readonly attribute: buffer"));
 return -1;
    }
    else if (FUNC_11(VAR_9, "cursor") == 0)
    {
 long VAR_11;
 long VAR_12;

 if (!FUNC_3(VAR_10, "(ll)", &VAR_11, &VAR_12))
     return -1;

 if (VAR_11 <= 0 || VAR_11 > VAR_8->win->w_buffer->b_ml.ml_line_count)
 {
     FUNC_5(FUNC_1("cursor position outside buffer"));
     return -1;
 }


 if (FUNC_7())
     return -1;

 VAR_8->win->w_cursor.lnum = VAR_11;
 VAR_8->win->w_cursor.col = VAR_12;




 FUNC_10(VAR_8->win);

 FUNC_12(VAR_5);
 return 0;
    }
    else if (FUNC_11(VAR_9, "height") == 0)
    {
 long VAR_13;
 win_T *VAR_14;

 if (FUNC_2(VAR_10, &VAR_13, VAR_0|VAR_1))
     return -1;




 VAR_14 = VAR_6;
 VAR_6 = VAR_8->win;

 FUNC_9();
 FUNC_13((int) VAR_13);
 VAR_6 = VAR_14;
 if (FUNC_8())
     return -1;

 return 0;
    }
    else
    {
 FUNC_6(VAR_2, VAR_9);
 return -1;
    }
}
