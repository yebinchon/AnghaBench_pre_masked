
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ lv_lock; } ;
typedef TYPE_1__ list_T ;
struct TYPE_7__ {TYPE_1__* list; } ;
typedef int PyObject ;
typedef TYPE_2__ ListObject ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static PyObject *
FUNC_4(ListObject *VAR_1, PyObject *VAR_2)
{
    list_T *VAR_3 = VAR_1->list;
    PyObject *VAR_4;

    if (VAR_3->lv_lock)
    {
 VAR_0;
 return ((void*)0);
    }

    if (!(VAR_4 = FUNC_0()))
 return ((void*)0);

    if (FUNC_3(VAR_3, VAR_2, VAR_4) == -1)
    {
 FUNC_1(VAR_4);
 return ((void*)0);
    }
    FUNC_1(VAR_4);

    FUNC_2(VAR_1);
    return (PyObject *)(VAR_1);
}
