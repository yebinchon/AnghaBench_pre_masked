
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int li_tv; } ;
typedef TYPE_1__ listitem_T ;
struct TYPE_7__ {int list; } ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_2__ ListObject ;


 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_5 (int ,long) ;

__attribute__((used)) static PyObject *
FUNC_6(ListObject *VAR_1, Py_ssize_t VAR_2)
{
    listitem_T *VAR_3;

    if (VAR_2 >= FUNC_1(VAR_1))
    {
 FUNC_3(VAR_0, FUNC_2("list index out of range"));
 return ((void*)0);
    }
    VAR_3 = FUNC_5(VAR_1->list, (long) VAR_2);
    if (VAR_3 == ((void*)0))
    {

 FUNC_4(FUNC_2("internal error: failed to get vim list item %d"),
  (int) VAR_2);
 return ((void*)0);
    }
    return FUNC_0(&VAR_3->li_tv);
}
