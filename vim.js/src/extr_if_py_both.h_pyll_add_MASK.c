
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pll_obj; struct TYPE_4__* pll_next; struct TYPE_4__* pll_prev; } ;
typedef TYPE_1__ pylinkedlist_T ;
typedef int PyObject ;



__attribute__((used)) static void
FUNC_0(PyObject *VAR_0, pylinkedlist_T *VAR_1, pylinkedlist_T **VAR_2)
{
    if (*VAR_2 == ((void*)0))
 VAR_1->pll_prev = ((void*)0);
    else
    {
 (*VAR_2)->pll_next = VAR_1;
 VAR_1->pll_prev = *VAR_2;
    }
    VAR_1->pll_next = ((void*)0);
    VAR_1->pll_obj = VAR_0;
    *VAR_2 = VAR_1;
}
