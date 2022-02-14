
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ col; scalar_t__ lnum; } ;
typedef TYPE_1__ pos_T ;
typedef int checkfun ;
struct TYPE_9__ {scalar_t__ tabObject; TYPE_3__* win; } ;
typedef TYPE_2__ WindowObject ;
struct TYPE_10__ {int w_vars; scalar_t__ w_winrow; scalar_t__ w_height; TYPE_1__ w_cursor; int w_buffer; } ;
typedef int PyObject ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int ,TYPE_3__*,int ,int *) ;
 int * FUNC_5 (long) ;
 int * FUNC_6 (char*,long,long) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_12 (char*,char*) ;

__attribute__((used)) static PyObject *
FUNC_13(WindowObject *VAR_3, char *VAR_4)
{
    if (FUNC_12(VAR_4, "buffer") == 0)
 return (PyObject *)FUNC_0(VAR_3->win->w_buffer);
    else if (FUNC_12(VAR_4, "cursor") == 0)
    {
 pos_T *VAR_5 = &VAR_3->win->w_cursor;

 return FUNC_6("(ll)", (long)(VAR_5->lnum), (long)(VAR_5->col));
    }
    else if (FUNC_12(VAR_4, "height") == 0)
 return FUNC_5((long)(VAR_3->win->w_height));
    else if (FUNC_12(VAR_4, "vars") == 0)
 return FUNC_2(VAR_3->win->w_vars);
    else if (FUNC_12(VAR_4, "options") == 0)
 return FUNC_4(VAR_1, VAR_3->win, (checkfun) VAR_0,
   (PyObject *) VAR_3);
    else if (FUNC_12(VAR_4, "number") == 0)
    {
 if (FUNC_1(VAR_3->tabObject))
     return ((void*)0);
 return FUNC_5((long)
  FUNC_11(VAR_3->win, FUNC_10(VAR_3->tabObject)));
    }
    else if (FUNC_12(VAR_4, "tabpage") == 0)
    {
 FUNC_7(VAR_3->tabObject);
 return (PyObject *)(VAR_3->tabObject);
    }
    else if (FUNC_12(VAR_4, "__members__") == 0)
 return FUNC_3(((void*)0), VAR_2);
    else
 return ((void*)0);
}
